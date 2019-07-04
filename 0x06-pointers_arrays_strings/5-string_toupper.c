#include "holberton.h"
/**
 * string_toupper - Converts all lowercase characters for uppercase
 * @a: String
 *
 * Return: String as a pointer
 */
char *string_toupper(char *a)
{
	while (*a)
	{
		if (*a >= 'a' && *a <= 'z')
			*a -= 32;
	a++;
	}
	return (a);
}
