// sortings.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "Sortings.h"


const size_t SIZE_ARRAY = 100000;



int main()
{
	int arr[SIZE_ARRAY];	

	//testRulesSort(arr, SIZE_ARRAY, insertSort);
	
	std::cout << "Tests: ";
	unsigned int time = testTimeSort(arr, SIZE_ARRAY, insertSort);
	std::cout << std::endl;

	std::cout << "Time algorithm: " << time << "  Size: "<< SIZE_ARRAY <<std::endl;

    return 0;
}

