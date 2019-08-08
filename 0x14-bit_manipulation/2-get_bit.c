#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: Decimal number
 *
 * Return: Nothing (void).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k = 0;

	if (index > 63)
		return (-1);

	k = n >> index;

	if (k & 1)
		return (1);
	return (0);
}
