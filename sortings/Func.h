#pragma once
#include <iostream>		// for cout
#include <ctime>		// for time
#include <cstdlib>		// for srand, rand

void printArray(int * mas, size_t len) {

	for (size_t i = 0; i < len; i++)
	{
		std::cout << "mas[" << i << "] = " << mas[i] << " ";
	}
	std::cout << std::endl;
}

void seedArray(int * mas, size_t len) {

	srand(time(0));
	for (size_t i = 0; i < len; i++)
	{
		mas[i] = rand();
	}
}
