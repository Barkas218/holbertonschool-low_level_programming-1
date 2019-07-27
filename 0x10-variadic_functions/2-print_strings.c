#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - Print strings with a separator.
 * @separator: Separator
 * @n: Quantity of numbers
 *
 * Return: Result of adding the numbers or 0 if not arguments were passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arguments;
	char *p;

	if (separator == NULL)
		return;

	va_start(arguments, n);
	for (i = 0; i < (n - 1); i++)
	{
		p = va_arg(arguments, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		printf("%s%s", p, separator);
	}
	printf("%s\n", va_arg(arguments, char *));
	va_end(arguments);
}
