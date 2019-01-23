#include "stdafx.h"
#include "TimeClock.h"
#include <ctime>
#include <iostream>


TimeClock::TimeClock():m_timestart(std::chrono::microseconds::zero())
{
	m_timestart = high_clock::now();
}


TimeClock::~TimeClock()
{

}
/**
	@brief: Get the microseconds second time from the class init;
*/
unsigned long long  TimeClock::MircosecondGetTimeCounter()
{
	auto timeget = high_clock::now();
	long long  timeconet =  std::chrono::duration_cast<std::chrono::microseconds>(timeget - m_timestart).count();
	//m_timestart = timeget;
	std::cout << "TIME COST****************  " << timeconet << "  ******************" << std::endl;
	return timeconet;
}
/**
	@brief: Get the milliseconds second time from the class init;
*/
unsigned long long  TimeClock::MsTimeGetCounter()
{

	auto timeget = high_clock::now();
	long long  timeconet = std::chrono::duration_cast<std::chrono::milliseconds>(timeget - m_timestart).count();
	//m_timestart = timeget;
	std::cout << "TIME COST****************----" << timeconet << "----******************"<<std::endl;
	return timeconet;
}
unsigned long long TimeClock::MsTimeGetCounter(high_clock::time_point timestart)
{

	auto timeget = high_clock::now();
	long long  timeconet = std::chrono::duration_cast<std::chrono::milliseconds>(timeget - timestart).count();
	std::cout << "TIME COST****************----" << timeconet << "----******************" << std::endl;
	return timeconet;
}

std::chrono::high_resolution_clock::time_point TimeClock::Gettime_point()
{
	return high_clock::now();
}
