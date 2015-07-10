#include "types.h"
using namespace std;

void PushValue(int val);
void PushValue(float val);
void PushValue(script_string_s val);
void PushValue(float* val);
void PushValue(short entNum);
extern int paramCount;

union VariableUnion
{
  int intValue;
  unsigned int uintValue;
  float floatValue;
  unsigned int stringValue;
  const float* vectorValue;
  const char* codePosValue;
  unsigned int pointerValue;
  void* stackValue;
  unsigned int entityOffset;
};
enum VariableType
{
  VAR_UNDEFINED = 0x0,
  VAR_BEGIN_REF = 0x1,
  VAR_POINTER = 0x1,
  VAR_STRING = 0x2,
  VAR_ISTRING = 0x3,
  VAR_VECTOR = 0x4,
  VAR_END_REF = 0x5,
  VAR_FLOAT = 0x5,
  VAR_INTEGER = 0x6,
  VAR_CODEPOS = 0x7,
  VAR_PRECODEPOS = 0x8,
  VAR_FUNCTION = 0x9,
  VAR_BUILTIN_FUNCTION = 0xA,
  VAR_BUILTIN_METHOD = 0xB,
  VAR_STACK = 0xC,
  VAR_ANIMATION = 0xD,
  VAR_PRE_ANIMATION = 0xE,
  VAR_THREAD = 0xF,
  VAR_NOTIFY_THREAD = 0x10,
  VAR_TIME_THREAD = 0x11,
  VAR_CHILD_THREAD = 0x12,
  VAR_OBJECT = 0x13,
  VAR_DEAD_ENTITY = 0x14,
  VAR_ENTITY = 0x15,
  VAR_ARRAY = 0x16,
  VAR_DEAD_THREAD = 0x17,
  VAR_COUNT = 0x18,
  VAR_FREE = 0x18,
  VAR_THREAD_LIST = 0x19,
  VAR_ENDON_LIST = 0x1A,
  VAR_TOTAL_COUNT = 0x1B
};
struct VariableValue
{
  VariableUnion u;
  int type;
};
typedef VariableValue* (*Scr_Add_t)();
typedef void (*script_function_t)(int scr_entref);
typedef void (*script_method_t)(int scr_entref);
typedef float* (*Scr_AllocVector_t)(float* v);
typedef short (*SL_GetStringOfSize_t)(const char* value,unsigned int user, unsigned int len, int type);
typedef const char* (*SL_ConvertToString_t)(short val);
typedef int (*Scr_GetEntityId_t)(int entnum, unsigned int classnum);
typedef struct gsc_notify
{
	gsc_notify()
	{
		name = script_string_s();
		callback = NULL;
	}
	gsc_notify(script_string_s name, void (*callback)(void* param))
	{
		name = name;
		callback = callback;
	}
	script_string_s name;
	void (*callback)(void* param);
};
typedef struct gsc_thread_t
{

	//constructor
	gsc_thread_t(void (*pthread)(gsc_thread_t * thisThread, void* param))
	{
		callback = pthread;
		notify = gsc_notify(script_string_s(), NULL); 
	}

	//causes the thread to wait for a certain amount of time until it is executed again
	void Sleep(unsigned int milliseconds)
	{
		sleepTime = GetTickCount() + milliseconds;
	}

	//adds a condition that the current thread will terminate on
	void endon(script_string_s str)
	{
		endonList.push_back(str);
	}

	//the thread that is executed each time the vm executes
	//it cannot be an infinate loop
	void (*callback)(gsc_thread_t* thisThread, void* param);

	//the parameter that is passed into the callback
	void* param;

	//determins how long the thread will wait before it executes again
	unsigned int sleepTime;

	//a list of the conditions that the current thread will terminate 
	//ie. death, disconnected
	std::vector<script_string_s> endonList;

	//this will be called once the name matches the param
	gsc_notify notify;
};

template <class T>
static T callScriptFunction(short functionId, scr_entref_t entref)
{
	try
	{
		*cParam = paramCount;
		if(functionId & 0x8000)
		{
			script_function_t gscFunction = g_scr_func_table[functionId - 0x8000];
			if(!gscFunction)
				throw exception("Unable to find function");
			gscFunction(entref);
		}
		else
		{
			script_method_t gscFunction = g_scr_meth_table[functionId];
			if(!gscFunction)
				throw exception("Unable to find method");
			gscFunction(entref);
		}
	}
	catch(exception e)
	{
		printf("callScriptFunction error %s\n",e.what());
		*cParam = 0;
		return reinterpret_cast<T>(NULL);
	}
	T tmp =  *reinterpret_cast<T *>((*stackTop)->u.pointerValue);
	*cParam = 0;
	return tmp;
}
void spawnThread(gsc_thread_t thread);
void initAW();