#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: Decimal number
 *
 * Return: Nothing (void).
 */
void print_binary(unsigned long int n)
{
	int k = 0, i = 0, start = 0;

	for (i = 63; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
			start = 1;
		if ((k & 1) && start)
			_putchar('1');
		else if (start)
			_putchar('0');
	}
}
