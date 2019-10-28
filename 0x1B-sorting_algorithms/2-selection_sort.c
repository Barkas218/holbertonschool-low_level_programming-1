#include "sort.h"

/**
 * selection_sort - Sorting an array of number using selection sort
 * @array: Array
 * @size: Size of the array
 * Return: Nothing
**/

void selection_sort(int *array, size_t size)
{
	size_t i, j, index_lesser;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		index_lesser = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index_lesser])
				index_lesser = j;
		}

		if (index_lesser != i)
		{
			tmp = array[i];
			array[i] = array[index_lesser];
			array[index_lesser] = tmp;
			print_array(array, size);
		}
	}
}
