#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - Print strings with a separator.
 * @format: Format string
 *
 * Return: Nothing (void)
 */
void print_all(const char *const format, ...)
{
	unsigned int i = 0;
	char *arg_s;
	va_list arguments;

	if (format == NULL)
		return;
	va_start(arguments, format);
	while (*(format + i) != '\0')
	{
		switch (*(format + i))
		{
		case 's':
			arg_s = va_arg(arguments, char *);
			if (arg_s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", arg_s);
			break;
		case 'i':
			printf("%d", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(arguments, double));
			break;
		case 'c':
			printf("%c", (char) va_arg(arguments, int));
			break;
		}
		while (format[i + 1] != '\0' && (format[i + 1] == 's' ||
		format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 'c'))
		{
			printf(", ");
			break;
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}
