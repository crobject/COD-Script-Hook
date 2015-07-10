#include <xtl.h>
#include <WinDef.h>
#include <iostream>
#include <xtl.h>
#include <vector>
#include <time.h>

using namespace std;
#pragma once
typedef int scr_entref_t;
typedef struct script_string_s
{
	script_string_s() {s=NULL;}
	script_string_s(const char* str);
	operator const char*();
	operator char*();
	short s;
	bool operator==(const script_string_s &other)
	{
		return s == other.s;
	}
};
typedef script_string_s conststring;
typedef int Entity;
typedef float* vector;
typedef short entitynum;
typedef int Object;
