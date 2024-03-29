#include "sortings/TestFunction.h"
#include "sortings/InsertSorting.h"
#include "sortings/MergeSorting.h"
#include "sortings/HeapSorting.h"
#include "sortings/QuickSort.h"


void test_search_function(){
    const size_t SIZE_ARRAY = 50000;
    int arr[SIZE_ARRAY];

//    testRulesSort(arr, SIZE_ARRAY, quick_sorting);

    testTimeSort("insert", arr, SIZE_ARRAY, insertSort);

    testTimeSort("merge", arr, SIZE_ARRAY, merge_sort);

    testTimeSort("heap", arr, SIZE_ARRAY, heap_sort);

    testTimeSort("quick", arr, SIZE_ARRAY, quick_sorting);

}


int main()
{
    test_search_function();
    return 0;
}

