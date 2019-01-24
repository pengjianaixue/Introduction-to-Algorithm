#pragma once
#include <Windows.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#ifdef _WIN32
	#define CRRTIMEPRINT    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED)    
	#define CRTINFOPRINT    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_BLUE) 
#define TIMECOUT(x)			CRRTIMEPRINT; \
							std::cout<<std::left<<std::setw(20)<<"TIME COST****************"<<std::right<<std::setw(6)<<x<<std::endl;\
							CRTINFOPRINT
#endif // _WIN32

#define COUT(x) std::cout<<x<<std::endl