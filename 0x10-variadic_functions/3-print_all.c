#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Print strings with a separator.
 * @format: Format string
 *
 * Return: Nothing (void)
 */
void print_all(const char *const format, ...)
{
	unsigned int i = 0, j = 0;
	char *arg_s;
	va_list arguments;

	va_start(arguments, format);
	while (*(format + i) != '\0' && (format))
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
		j = i + 1;
		while (format[j] != '\0' && (format[i] == 'c' || format[i] == 'f'
		|| format[i] == 's' || format[i] == 'i'))
		{
			if (format[j] == 's' || format[j] == 'i' || format[j] == 'f'
			|| format[j] == 'c')
				printf(", ");
		j++;
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}
