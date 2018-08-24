#pragma once
#include "Func.h"



unsigned int testTimeSort(int *mas, size_t len, void(*funcSort)(int*, size_t), int period = 100);


void insertSort(int * mas, size_t len) {

	for (size_t i = 1; i < len; i++)
	{
		int j = i - 1;
		int val = mas[i];
		while (j > -1 && mas[j] > val) {
			mas[j + 1] = mas[j];
			j--;
		}
		mas[j + 1] = val;
	}

}

void testRulesSort(int* mas, size_t len, void(*funcSort)(int*, size_t)) {

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