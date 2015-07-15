#include "script.h"
#include "Hooks.h"
#include <algorithm>
int paramCount = 0;
std::vector<gsc_thread_t> functions_threads;
void (*function_initializaton_function)();
#ifdef AW
//TU11
SL_GetStringOfSize_t SL_GetStringOfSize = (SL_GetStringOfSize_t)0x824872A8;
SL_ConvertToString_t SL_ConvertToString = (SL_ConvertToString_t)0x824869F8;
Scr_AllocVector_t Scr_AllocVector = (Scr_AllocVector_t)0x82483AA0;
Scr_Add_t Scr_Add = (Scr_Add_t)0x82478548;
Scr_GetEntityId_t Scr_GetEntityId = (Scr_GetEntityId_t)0x82483450;
script_function_t* g_scr_func_table = (script_function_t*)0x83B79B10;
script_method_t* g_scr_meth_table = (script_method_t*)0x83B7B0A8;
VariableValue** stackTop = (VariableValue**)0x83EEBA70;
int * cParam = (int*)0x83EEBA78;
#define VM_EXECUTE_ADDRESS 0x8247AC28
#define VM_NOTIFY_ADDRESS 0x8247A4B0
#define G_INITGAME_ADDRESS 0x82545040

#elif defined(GHOST)
//TU16
SL_GetStringOfSize_t SL_GetStringOfSize = (SL_GetStringOfSize_t)0x82493100;
SL_ConvertToString_t SL_ConvertToString = (SL_ConvertToString_t)0x82492318;
Scr_AllocVector_t Scr_AllocVector = (Scr_AllocVector_t)0x82494C60;
Scr_Add_t Scr_Add = (Scr_Add_t)0x8249BE20;
Scr_GetEntityId_t Scr_GetEntityId = (Scr_GetEntityId_t)0x824988A0;
script_function_t* g_scr_func_table = (script_function_t*)0x83658350;
script_method_t* g_scr_meth_table = (script_method_t*)0x83659410;
VariableValue** stackTop = (VariableValue**)0x839A9038;
int * cParam = (int*)0x839A903C;

#define VM_EXECUTE_ADDRESS 0x8249D6E8
#define VM_NOTIFY_ADDRESS 0x8249B538
#define G_INITGAME_ADDRESS 0x823F44A0

#elif defined(MW3)

#endif

//script string overloads
script_string_s::script_string_s(const char* str)
{
	s = SL_GetStringOfSize(str,1, strlen(str) + 1, 8);
}
script_string_s::operator const char *()
{
	return SL_ConvertToString(s);
}
script_string_s::operator char *()
{
	return (char*)SL_ConvertToString(s);
}
void PushValue(int val)
{
	paramCount++;
	VariableValue* stack = Scr_Add();
	stack->type = VAR_INTEGER;
	stack->u.intValue = val;
}
void PushValue(float val)
{
	paramCount++;
	VariableValue* stack = Scr_Add();
	stack->type = VAR_FLOAT;
	stack->u.floatValue = val;
}
void PushValue(float* val)
{
	paramCount++;
	VariableValue* stack = Scr_Add();
	stack->type = VAR_VECTOR;
	stack->u.vectorValue = Scr_AllocVector(val);
}
void PushValue(short val)
{
	paramCount++;
	VariableValue* stack = Scr_Add();
	stack->type = VAR_POINTER;
	stack->u.intValue = Scr_GetEntityId(val, 0);	
}
void PushValue(script_string_s val)
{
	paramCount++;
	VariableValue* stack = Scr_Add();
	stack->type = VAR_STRING;
	stack->u.intValue = val.s;
}
void spawnThread(gsc_thread_t thread)
{
	functions_threads.push_back(thread);
}
__declspec(naked) int VM_Execute_stub(...)
{
     __asm
     {
		nop
		nop
		nop
		nop
		nop
		nop
		nop
		blr
     }
}
__declspec(naked) int VM_Notify_stub(...)
{
     __asm
     {
		li r3, 0
		nop
		nop
		nop
		nop
		nop
		nop
		blr
     }
}
__declspec(naked) int G_InitGame_stub(...)
{
     __asm
     {
		li r3, 1
		nop
		nop
		nop
		nop
		nop
		nop
		blr
     }
}
int VM_Execute_hook()
{
	int ret = VM_Execute_stub();
	paramCount = 0;
	for(auto i = functions_threads.begin(); i != functions_threads.end(); i++)
	{
		if(i->sleepTime <= GetTickCount() && i->notify.name.s == 0)
			{
				i->callback(&(*i), i->param);
			}
	}
	return ret;
}

void VM_Notify_hook(unsigned int notifyListOwnerId, script_string_s stringValue, VariableValue *top)
{
	VM_Notify_stub(notifyListOwnerId, stringValue, top);
	//lets look through out threads to see if we have anything about this notification
	for (auto i = functions_threads.begin(); i != functions_threads.end(); ++i)
	{
		for (auto j = i->endonList.begin(); j != i->endonList.end(); ++j)
		{
			if ( (*j) == stringValue)
			{
				j = i->endonList.erase(j);
			}
		}
		//lets see if there is something that we are waiting for
		if (i->notify.name.s == stringValue.s)
		{
			//call out function using the variable at the top of the stack as the param
			i->notify.callback((void *)&top->u);
		}

	}
}

void G_InitGame_hook(int levelTime, unsigned int randomSeed, int restart, int registerDvars, int savegame)
{
	G_InitGame_stub(levelTime, randomSeed, restart, registerDvars, savegame);
	function_initializaton_function();
}
void initGameHooks()
{
	hookFunctionStart((PDWORD)VM_EXECUTE_ADDRESS,(PDWORD)VM_Execute_stub,(DWORD)VM_Execute_hook);
	hookFunctionStart((PDWORD)VM_NOTIFY_ADDRESS, (PDWORD)VM_Notify_stub,(DWORD)VM_Notify_hook);
	hookFunctionStart((PDWORD)G_INITGAME_ADDRESS,(PDWORD)G_InitGame_stub,(DWORD)G_InitGame_hook);
}
//use this function to intialize the function that will be called with the game starts
//use that function to initalize script threads 
void initGame(void (*start_function)())
{
	function_initializaton_function = start_function;
}