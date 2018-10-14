#pragma once
#include "ServiceFunction.h"

void testRulesSort(int* mas, size_t len, void(*funcSort)(int*, size_t));
unsigned int testTimeSort(int *mas, size_t len, void(*funcSort)(int*, size_t), int period = 10);