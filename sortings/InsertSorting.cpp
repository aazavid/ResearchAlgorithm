#include "InsertSorting.h"


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