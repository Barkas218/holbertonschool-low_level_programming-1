#include "holberton.h"
/**
 * _strlen - Get the length of a string
 * @s: Set of characters
 *
 * Return: String length (int)
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * puts_half - Print the half of a string
 * @str: Set of characters
 *
 * Return: Nothing
*/
void puts_half(char *str)
{
	int i;
	int len = _strlen(str);
	int stop;

	if (len % 2 == 0)
		stop = len / 2;
	else
		stop = (len - 1) / 2;

	for (i = stop; i <= len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
