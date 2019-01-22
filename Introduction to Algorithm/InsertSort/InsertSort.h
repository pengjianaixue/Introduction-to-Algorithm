#pragma once
namespace SelfAlgorithm
{
	/*
	insertSort 排序思想是把最新的元素插入到已经排好队的队列中，这样的有点在于，只要新元素找到一个位置是比它小
			   则可以终止循环 ，把这个新元素放在前一个比它大元素的位置即可
	*/
	class InsertSort
	{
	public:
		InsertSort();
		~InsertSort();
	public:
		template <typename T>
		static  void SelfInsertSort(T *array, int nlength);
	};
	template<typename T>
	inline void InsertSort::SelfInsertSort(T *array,int nlength)
	{
		// self version 
		/*for (size_t i = 1; i < nlength; i++)
		{
			auto temp = array[i];
			
			for (size_t j = i; j >0; j--) // 这么方法会造成元素已经到了正确的位置还是继续循环
			{
				if(array[j - 1]>temp)
				{
					array[j] = array[j - 1];
					array[j - 1] = temp; // 没有必要的拷贝 
				}
			}
		}*/
		// Book version
		for (size_t i = 1; i < nlength; i++)
		{
			auto temp = array[i];
			int j = i - 1;
			while (j>=0 && array[j]>temp)
			{
				array[j+1] = array[j];
				j = j - 1;
			}
			array[j+1] = temp;
		}
		
	}
}


