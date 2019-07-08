#include "holberton.h"
/**
 * _strchr - Function that locates a character in a string.
 * @s: Pointer to the string
 * @c: Character to locate
 *
 * Return: NULL if characters not found or new pointer direction.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*s == c)
			return (s);
		i++;
	}
	return (NULL);
}
