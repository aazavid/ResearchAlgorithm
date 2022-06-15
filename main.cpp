#include "sortings/TestFunction.h"
#include "sortings/InsertSorting.h"
#include "sortings/MergeSorting.h"
#include "sortings/HeapSorting.h"


void test_search_function(){
    const size_t SIZE_ARRAY = 10000;
    int arr[SIZE_ARRAY];

//    testRulesSort(arr, SIZE_ARRAY, heap_sort);

    std::cout << "Tests insert sorting: ";
    unsigned int time = testTimeSort(arr, SIZE_ARRAY, insertSort);
    std::cout << std::endl;

    std::cout << "Time algorithm insert sort: " << time << "  Size: "<< SIZE_ARRAY <<std::endl;

    std::cout << "Tests merge sorting: ";
    time = testTimeSort(arr, SIZE_ARRAY, merge_sort);
    std::cout << std::endl;

    std::cout << "Time algorithm merge sort: " << time << "  Size: " << SIZE_ARRAY << std::endl;

    std::cout << "Tests heap sorting: ";
    time = testTimeSort(arr, SIZE_ARRAY, heap_sort);
    std::cout << std::endl;

    std::cout << "Time algorithm heap sort: " << time << "  Size: " << SIZE_ARRAY << std::endl;
}


int main()
{
    test_search_function();
    return 0;
}

