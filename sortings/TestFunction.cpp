#include "TestFunction.h"


void testRulesSort(int* mas, size_t len, void(*funcSort)(int*, size_t)) {

	std::cout << "let array" << std::endl;
	seedArray(mas, len);

	printArray(mas, len);

	std::cout << "sort array" << std::endl;

	funcSort(mas, len);

	printArray(mas, len);

}


void testTimeSort(const std::string &name, int *mas, size_t len, void(*funcSort)(int*, size_t), int period)
{
    std::cout << "Tests " << name.c_str()  << "sorting: ";
	unsigned int start_time, end_time, search_time = 0;

	for (size_t i = 0; i < period; i++)
	{
		seedArray(mas, len);

		start_time = clock(); // start timer
		funcSort(mas, len);
		end_time = clock(); // finish timer

		search_time += (end_time - start_time);
		std::cout << "*";

	}

	unsigned  int time = search_time / period;
    std::cout << std::endl;
    std::cout << "Time algorithm " << name.c_str() <<" sort: " << time << "  Size: "<< len <<std::endl;
}