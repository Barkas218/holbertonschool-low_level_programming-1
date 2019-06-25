#include "holberton.h"

/**
 * main - Prints the alphabet 10 times using _putchar
 *
 * Return: 0 - Success
 */


int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int i;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
