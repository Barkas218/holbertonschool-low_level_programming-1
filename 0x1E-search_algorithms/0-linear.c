#include "search_algos.h"


/**
 * linear_search - Linear search
 * @array: Array pointer
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: value or -1 if error
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
		return (-1);
}
