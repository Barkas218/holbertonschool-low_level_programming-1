#include "holberton.h"

/**
 * jack_bauer - Prints the hour in military format with EOL.
 *
 * Return: There is no return value (void).
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i == '2' && j == '4')
				break;
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
