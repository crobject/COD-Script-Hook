#include "Hooks.h"
void PatchInJump(PDWORD addr, DWORD dest, BOOL linked)
{
	if(dest & 0x8000) // If bit 16 is 1
		addr[0] = 0x3D600000 + (((dest >> 16) & 0xFFFF) + 1); // lis %r11, dest>>16 + 1
	else
		addr[0] = 0x3D600000 + ((dest >> 16) & 0xFFFF); // lis %r11, dest>>16

	addr[1] = 0x396B0000 + (dest & 0xFFFF); // addi %r11, %r11, dest&0xFFFF
	addr[2] = 0x7D6903A6; // mtctr %r11

	if(linked)
		addr[3] = 0x4E800421; // bctrl
	else
		addr[3] = 0x4E800420; // bctr
	__dcbst(0, addr);
	__sync();
	__isync();
}

void __declspec(naked) GLPR_FUN(VOID)
{
	__asm{
		std     r14, -0x98(sp)
		std     r15, -0x90(sp)
		std     r16, -0x88(sp)
		std     r17, -0x80(sp)
		std     r18, -0x78(sp)
		std     r19, -0x70(sp)
		std     r20, -0x68(sp)
		std     r21, -0x60(sp)
		std     r22, -0x58(sp)
		std     r23, -0x50(sp)
		std     r24, -0x48(sp)
		std     r25, -0x40(sp)
		std     r26, -0x38(sp)
		std     r27, -0x30(sp)
		std     r28, -0x28(sp)
		std     r29, -0x20(sp)
		std     r30, -0x18(sp)
		std     r31, -0x10(sp)
		stw     r12, -0x8(sp)
		blr
	}
}

DWORD relinkGPLR(DWORD offset, PDWORD saveStubAddr, PDWORD orgAddr)
{
	DWORD inst = 0, repl;
	PDWORD saver = (PDWORD)GLPR_FUN;
	// if the msb is set in the instruction, set the rest of the bits to make the int negative
	if(offset & 0x2000000)
		offset = offset | 0xFC000000;
	repl = orgAddr[offset/4];
	for(int i = 0; i < 20; i++)
	{
		if(repl == saver[i])
		{
			int newOffset = (int)&saver[i] - (int)saveStubAddr;
			inst = 0x48000001 | (newOffset & 0x3FFFFFC);
		}
	}
	return inst;
}

void hookFunctionStart(PDWORD addr, PDWORD saveStub, DWORD dest)
{
	if(saveStub != NULL && addr != NULL) {
		DWORD addrReloc = (DWORD)(&addr[4]);// replacing 4 instructions with a jump, this is the stub return address
		// build the stub
		// make a jump to go to the original function start+4 instructions
		if(addrReloc & 0x8000) // If bit 16 is 1
			saveStub[0] = 0x3D600000 + (((addrReloc >> 16) & 0xFFFF) + 1); // lis %r11, dest>>16 + 1
		else
			saveStub[0] = 0x3D600000 + ((addrReloc >> 16) & 0xFFFF); // lis %r11, dest>>16

		saveStub[1] = 0x396B0000 + (addrReloc & 0xFFFF); // addi %r11, %r11, dest&0xFFFF
		saveStub[2] = 0x7D6903A6; // mtctr %r11
		// instructions [3] through [6] are replaced with the original instructions from the function hook
		// copy original instructions over, relink stack frame saves to local ones
		for(int i = 0; i < 4; i++) {
			if((addr[i] & 0x48000003) == 0x48000001) // branch with link
				saveStub[i+3] = relinkGPLR((addr[i] & ~0x48000003), &saveStub[i+3], &addr[i]);
			else
				saveStub[i+3] = addr[i];
		}
		saveStub[7] = 0x4E800420; // bctr
		__dcbst(0, saveStub);
		__sync();
		__isync();

		// patch the actual function to jump to our replaced one
		PatchInJump(addr, dest, FALSE);
	}
}