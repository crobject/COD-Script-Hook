#include "types.h"
using namespace std;

void PushValue(int val);
void PushValue(float val);
void PushValue(script_string_s val);
void PushValue(float* val);
void PushValue(void* entval);
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
	VAR_UNDEFINED = 0,
	VAR_OBJECT = 1,
	VAR_STRING = 2,
	VAR_ISTRING = 3,
	VAR_VECTOR = 4,
	VAR_FLOAT = 5,
	VAR_INT = 6,
	VAR_ANIM = 0xD
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