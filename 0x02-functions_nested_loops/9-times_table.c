#include "holberton.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times_table.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i, j, result = 0, fc, sc, tc;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j < 9)
			{
				if (result < 10)
				{
				_putchar('0' + result);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				else if (result > 10 && result < 100)
				{
					fc = result / 10;
					sc = result % 10;
					_putchar(fc + '0');
					_putchar(sc + '0');
					_putchar(' ');
				}
				else if (result > 100)
				{
					fc = result / 100;
					sc = (result / 10) % 10;
					tc = result % 10;
					_putchar(fc + '0');
					_putchar(sc + '0');
					_putchar(tc + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
			}
			else
			{
                                _putchar('0' + result);
                                _putchar(',');
                                if (result > 10 && result < 100)
				{
                                        fc = result / 10;
                                        sc = result % 10;
                                        _putchar(' ');
                                        _putchar(fc + '0');
                                        _putchar(sc + '0');
				}
                                else if (result > 100)
				{
                                        fc = result / 100;
                                        sc = (result / 10) % 10;
                                        tc = result % 10;
                                        _putchar(fc + '0');
                                        _putchar(sc + '0');
                                        _putchar(tc + '0');
				}
                                else
                                {
					_putchar(' ');
                                        _putchar(' ');
                                        _putchar(result + '0');
					_putchar('$');
				}
			}
		}
		_putchar('\n');
	}
}
