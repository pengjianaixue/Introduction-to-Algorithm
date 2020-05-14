#include "stdafx.h"
#include "InsertSort.h"
#include "../uilitiy/TimeClock.h"
int main()
{
	
	double needsort[100000] = {};
	TimeClock a;
	for (size_t i = 0; i < std::size(needsort); i++)
	{
		needsort[i] = (rand() % std::size(needsort))/1.1;
	}
	COUT("\n\r");
	auto time = a.MsTimeGetCounter();
	auto timeponitsort = TimeClock::Gettime_point();
	SelfAlgorithm::InsertSort::SelfInsertSort(needsort, std::size(needsort));
	auto timesort = TimeClock::MsTimeGetCounter(timeponitsort);
	for (size_t i = 0; i < std::size(needsort); i++)
	{
		COUT(needsort[i]);
	}
	COUT("time:");
	COUT(time);
	COUT("timeprintend");
	system("pause");
	_CrtDumpMemoryLeaks(); //check the memory leaks
	return 0;
}