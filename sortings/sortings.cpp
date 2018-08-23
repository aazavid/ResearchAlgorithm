// sortings.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>		// for cout
#include <ctime>		// for time
#include <cstdlib>		// for srand, rand



const size_t SIZE_ARRAY = 100000;
unsigned int testTimeSort(int *mas, size_t len, void(*funcSort)(int*, size_t), int period = 100);

void printArray(int * mas, size_t len) {

	for (size_t i = 0; i < len; i++)
	{
		std::cout << "mas[" << i << "] = " << mas[i] << " ";
	}
	std::cout << std::endl;
}

void seedArray(int * mas, size_t len){
	
	srand(time(0));
	for (size_t i = 0; i < len; i++)
	{
		mas[i] = rand();
	}
}

void insertSort(int * mas, size_t len) {
	
	for (size_t i = 1; i < len; i++)
	{
		int j = i - 1;
		int val = mas[i];
		while (j > -1 && mas[j] > val) {
			mas[j + 1] = mas[j];
			j--;
		}
		mas[j+1] = val;
	}
	
}

void testRulesSort(int* mas, size_t len, void(*funcSort)(int* , size_t )) {
	
	std::cout << "let array" << std::endl;
	seedArray(mas, len);

	printArray(mas, len);

	std::cout << "sort array" << std::endl;

	funcSort(mas, len);

	printArray(mas, len);

}


unsigned int testTimeSort(int *mas, size_t len, void(*funcSort)(int*, size_t), int period)
{

	unsigned int start_time, end_time, search_time = 0;

	for (size_t i = 0; i < period; i++)
	{
		seedArray(mas, len);

		start_time = clock(); // start timer
		funcSort(mas, len);
		end_time = clock(); // finish timer
		
		search_time += (end_time - start_time); // time
		std::cout << "*";
		
	}

	return search_time / period;
}


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

