#include "holberton.h"
/**
 * _islower - Check for lowercase characters
 * @c: Integer holding the character
 * Return: 1- Lowercase character 0- Not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
