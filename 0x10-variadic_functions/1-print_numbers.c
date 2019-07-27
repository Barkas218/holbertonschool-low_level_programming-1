#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers with a separator.
 * @separator: Separator
 * @n: Quantity of numbers
 *
 * Return: Result of adding the numbers or 0 if not arguments were passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < (n - 1); i++)
		if (separator == NULL)
			printf("%d", va_arg(arguments, int));
		else
			printf("%d%s", va_arg(arguments, int), separator);

	printf("%d\n", va_arg(arguments, int));
	va_end(arguments);
}
