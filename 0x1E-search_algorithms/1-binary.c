#include "search_algos.h"

/**
 * binary_search - Binary search
 * @array: Array pointer
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: value or -1 if error
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int final = size - 1;
	int middle, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (start <= final)
	{
		printf("Searching in array: ");

		for (i = start; i < final; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		middle = (start + final) / 2;
		if (array[middle] == value)
			return (middle);
		else if (value > array[middle])
			start = middle + 1;
		else
			final = middle - 1;
	}

	return (-1);
}
