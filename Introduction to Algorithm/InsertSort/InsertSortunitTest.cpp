#include "stdafx.h"
#include "InsertSort.h"
#include "../uilitiy/TimeClock.h"
int main()
{
	
	int size = 10000;
	double *needsort = new double[size];
	TimeClock a;
	for (size_t i = 0; i < size; i++)
	{
		
		needsort[i] = (rand() % size)/1.1;
		//COUT(needsort[i]);
	}
	COUT("\n\r");
	auto time = a.MsTimeGetCounter();
	auto timeponitsort = TimeClock::Gettime_point();
	SelfAlgorithm::InsertSort::SelfInsertSort(needsort, size);
	auto timesort = TimeClock::MsTimeGetCounter(timeponitsort);
	/*for (size_t i = 0; i < size; i++)
	{
		COUT(needsort[i]);
	}*/
	COUT("time:");
	COUT(time);
	COUT("timeprintend");
	system("pause");
	delete[] needsort;
	_CrtDumpMemoryLeaks(); //check the memory leaks
	return 0;
}