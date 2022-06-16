//
// Created by anton on 15.06.2022.
//
#include "HeapSorting.h"
#include "ServiceFunction.h"

inline int get_parent(int i){
    return i/2;
}

inline int get_left(int i){
    return 2*i;
}

inline int get_right(int i){
    return 2*i + 1;
}
// support order in max heap
void max_heapify(int *array, size_t size, int i){
    int l = get_left(i);
    int r = get_right(i);
    int large = i;
    if (l <= size && array[l] > array[i]){
        large = l;
    }
    else{
        large = i;
    }
    if(r <= size && array[r] > array[large])
    {
        large = r;
    }
    if (large != i) {
        swap(array[i], array[large]);
        max_heapify(array, size, large);
    }
}

// build heap
void build_max_heap(int *array, size_t size){
    for(int i = size/2; i >= 0; --i){
        max_heapify(array, size, i);
    }
}

void heap_sort(int *array, size_t size){
    build_max_heap(array, size-1);
    auto heap_size = size-1;
    for(int i = size-1; i > 0; --i){
        swap(array[0], array[i]);
        --heap_size;
        max_heapify(array, heap_size, 0);
    }
}