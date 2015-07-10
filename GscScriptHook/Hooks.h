#include "types.h"
#define __isync() __emit(0x4C00012C)
VOID PatchInJump(PDWORD addr, DWORD dest, BOOL linked);
VOID hookFunctionStart(PDWORD addr, PDWORD saveStub, DWORD dest);
