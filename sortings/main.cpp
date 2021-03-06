#include "stdafx.h"

#include "TestFunction.h"
#include "InsertSorting.h"
#include "MergeSorting.h"



const size_t SIZE_ARRAY = 10000;



int main()
{
	int arr[SIZE_ARRAY];	

	//testRulesSort(arr, SIZE_ARRAY, insertSort);
	
	std::cout << "Tests insert sorting: ";
	unsigned int time = testTimeSort(arr, SIZE_ARRAY, insertSort);
	std::cout << std::endl;

	std::cout << "Time algorithm insert sort: " << time << "  Size: "<< SIZE_ARRAY <<std::endl;

	std::cout << "Tests merge sorting: ";
	time = testTimeSort(arr, SIZE_ARRAY, merge_sort);
	std::cout << std::endl;

	std::cout << "Time algorithm merge sort: " << time << "  Size: " << SIZE_ARRAY << std::endl;

    return 0;
}

