#pragma once
#include "ServiceFunction.h"

void testRulesSort(int* mas, size_t len, void(*funcSort)(int*, size_t));
void testTimeSort(const std::string &name, int *mas, size_t len, void(*funcSort)(int*, size_t), int period = 10);