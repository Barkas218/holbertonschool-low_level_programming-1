#include "holberton.h"

/**
 * print_sign - Check for negative, positive and zero
 * @n: Integer holding the number
 * Return: 1- Positive number 0- Zero -1- Negative number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
