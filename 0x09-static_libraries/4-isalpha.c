#include "holberton.h"

/**
 * _isalpha - Check for alphabetic characters
 * @c: Integer holding the character
 * Return: 1- Alphabetic character 0- Not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
