//
// Created by anton on 16.06.2022.
//
#include "QuickSort.h"
#include "algorithm"

int partition(int *array, int l, int r){
    auto x = array[r];
    auto i = l-1;
    for(auto j = l; j < r; ++j){
        if(array[j] <= x){
            ++i;
            auto tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }
    auto tmp = array[i+1];
    array[i+1] = array[r];
    array[r] = tmp;
    return i+1;
}

int median_partition(int *array, int l, int r){
    int m = r/2;
    if(array[l] > array[m]){
        if(array[l] < array[r]){
            auto tmp = array[l];
            array[l] = array[r];
            array[r] = tmp;
        }
    } else {
        if(array[m] < array[r]){
            auto tmp = array[m];
            array[m] = array[r];
            array[r] = tmp;
        }
    }
    return partition(array, l, r);
}

void quick_sort(int *array, int l, int r){
    if(l < r){
        auto q = median_partition(array, l, r);
        quick_sort(array, l, q - 1);
        quick_sort(array, q + 1, r);
    }
}

void quick_sorting(int *array, size_t size){
    return quick_sort(array, 0, size-1);
}