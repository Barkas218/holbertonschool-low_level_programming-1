#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc.
 * @b: Size for memory allocation (bytes).
 *
 * Return: Void pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
