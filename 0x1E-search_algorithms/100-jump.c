#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Jump search
 * @array: Array pointer
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: value or -1 if error
 */

int jump_search(int *array, size_t size, int value)
{
	int start = 0;
	int final = size - 1;
	int step = sqrt(size);
	int middle, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (start <= final)
	{
		middle = start + step;
		if (middle > final)
			middle = final;

		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (value == array[start])
			return (start);
		else if (value <= array[middle] || final == middle)
		{
			printf("Value found between indexes [%d] and [%d]\n", start, start + step);
			for (i = start; i <= middle; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
			return (-1);
		}

		start += middle;
	}
	return (-1);
}
