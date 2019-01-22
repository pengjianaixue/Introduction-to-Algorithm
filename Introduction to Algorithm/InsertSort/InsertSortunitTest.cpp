#include "stdafx.h"
#include "Resoure.h"
#include "InsertSort.h"
int main()
{
	int size = 1000;
	double *needsort = new double[size];
	for (size_t i = 0; i < size; i++)
	{
		needsort[i] = (rand() % size)/1.1;
		COUT(needsort[i]);

	}
	COUT("\n\r");
	SelfAlgorithm::InsertSort::SelfInsertSort(needsort, size);
	for (size_t i = 0; i < size; i++)
	{

		COUT(needsort[i]);
	}
	system("pause");

	delete[] needsort;
	_CrtDumpMemoryLeaks();
	return 0;
}