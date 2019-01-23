#pragma once
#ifndef _MERGESORT_H
#define _MERGESORT_H
#ifdef CLASS_DLL_EXPORTS
#define CLASS_DLL_API __declspec(dllexport)
#else
#define CLASS_DLL_API __declspec(dllimport)
#endif
namespace  SelfAlgorithm
{	
	/*
	MergeSort main mind is 

	*/
	class CLASS_DLL_API MergeSort
	{
		public:
			MergeSort();
			~MergeSort();
		public:
			template <typename T>
			void mergeSort(T InputArray[], size_t length);
		private:
			template <typename T>
			void merge(T InputArray[], size_t split, size_t length);
		};
		template<typename T>
		inline void MergeSort::mergeSort(T InputArray[], size_t length)
		{	

		}
		template<typename T>
		inline void MergeSort::merge(T InputArray[],size_t split, size_t length)
		{
			unsigned int  halfbefore = split;
			unsigned int  halfafter = length - split;
			T *before = new T[halfbefore];
			T *after =	new T[halfafter];
		
		}
}
#endif // !1

