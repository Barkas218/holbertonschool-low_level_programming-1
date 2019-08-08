#include "holberton.h"
/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 - Big Endian or 1 - Little Endian.
 */
int get_endianness(void)
{
	int a = 1;

	char *pa = (char *) &a;

	if (*pa == 1)
		return (1);

	return (0);
}
