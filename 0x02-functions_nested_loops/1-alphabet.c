#include "holberton.h"

/**
 * main - Prints the alphabet using _putchar
 *
 * Return: 0 - Success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
