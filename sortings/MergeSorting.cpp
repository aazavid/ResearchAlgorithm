#include "MergeSorting.h"

void merge_sort(int *array, size_t size)
{
	if (size > 1)
	{
		size_t const left_size = size / 2;
		size_t const right_size = size - left_size;

		merge_sort(array, left_size);
		merge_sort(array + left_size, right_size);

		size_t lidx = 0, ridx = left_size, idx = 0;
		int * tmp_array = new int[size];

		while (lidx < left_size || ridx < size)
		{
			if (array[lidx] < array[ridx])
			{
				tmp_array[idx++] = array[lidx];
				lidx++;
			}
			else
			{
				tmp_array[idx++] = array[ridx];
				ridx++;
			}

			if (lidx == left_size)
			{
				for (size_t i = ridx, j = idx; i < size; ++i, ++j)
				{
					tmp_array[j] = array[i];
				}

				break;
			}
			if (ridx == size)
			{
				for (size_t i = lidx, j = idx; i < left_size; ++i, ++j)
				{
					tmp_array[j] = array[i];
				}
				break;
			}
		}
		for (size_t i = 0; i < size; ++i)
		{
			array[i] = tmp_array[i];

		}
		delete[] tmp_array;

	}
}