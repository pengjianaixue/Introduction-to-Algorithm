// uilitiy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "TimeClock.h"

int main()
{
	TimeClock a;
	auto time = a.MircosecondGetTimeCounter();
	printf("%64d\n\r", a.MircosecondGetTimeCounter());
	system("pause");
    return 0;
}

