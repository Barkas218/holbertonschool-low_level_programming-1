#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - gets number of bits you would need to flip to get the number.
 * @n: Number 1
 * @m: Number 2
 *
 * Return: Number of bytes necessary to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = 0;
	int i = 0, count = 0;

	result = n ^ m;

	for (i = 0; i <= 63 ; i++)
	{
		if ((result >> i) & 1)
			count++;
	}

	return (count);
}
