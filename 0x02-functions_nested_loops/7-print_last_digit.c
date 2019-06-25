#include "holberton.h"

/**
 * print_last_digit - check for the last digit of a number (abs).
 * @n: Holds the integer for the function
 * Return: Last digit of a number (abs).
 */

int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 0)
		result *= -1;
	_putchar('0' + result);
	return (result);
}
