#pragma once
#include <iostream>		///< for cout
#include <ctime>		///< for time
#include <cstdlib>		///< for srand, rand
/**
	@brief 
*/
void printArray(int * mas, size_t len);
void seedArray(int * mas, size_t len);

template <typename T>
void swap(T &first, T &second){
    T tmp(first);
    first = second;
    second = tmp;
}
