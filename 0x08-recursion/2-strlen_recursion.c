#include "holberton.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: Pointer to a string
 *
 * Return: Length of a string (int).
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return s;
	}

	return ((int) (s - _strlen_recursion(++s)));
}
