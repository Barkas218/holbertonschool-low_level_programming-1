#include "holberton.h"

/**
 * main - Prints a character using _putchar
 *
 * Return: 0 - Success
 */

int main(void)
{
	char c[] = "Holberton\n";
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(c[i]);
	return (0);
}
