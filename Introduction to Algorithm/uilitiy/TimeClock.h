#pragma once
#ifndef _TIME_CLOCK_H
#define _TIME_CLOCK_H
#include <chrono>
#ifdef CLASS_DLL_EXPORTS
	#define CLASS_DLL_API __declspec(dllexport)
#else
	#define CLASS_DLL_API __declspec(dllimport)
#endif
class CLASS_DLL_API TimeClock
{

public:
	typedef std::chrono::high_resolution_clock high_clock;
	typedef std::chrono::microseconds res;
	TimeClock();
	~TimeClock();
private:
	high_clock::time_point m_timestart;
public:
	/**
	@brief Get the microseconds second time from the class init;
	*/
	unsigned long long  MircosecondGetTimeCounter();
	/**
	@brief Get the milliseconds second time from the class init;
	*/
	unsigned long long  MsTimeGetCounter();

	/**
	@brief Get the gap time of function run and input  milliseconds second time ;
	@param high_clock::time_point timestart start time
	*/
	unsigned long long  MsTimeGetCounter(high_clock::time_point timestart);
	/**
	@brief Get the  time_point class  of function run;
	*/
	static high_clock::time_point Gettime_point();

};
#endif // _TIME_CLOCK_H

