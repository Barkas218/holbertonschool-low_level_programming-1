#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Print the numbers from the input to 98..
 * @n: Holds the integer for the function.
 * 
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int i, j, result = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j < 9)
			{
				printf("%d", result);
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			else
				printf("%d", result);
			_putchar('$');
		}
		_putchar('\n');
	}
}
