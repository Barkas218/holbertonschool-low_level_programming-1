#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Print the numbers from the input to 98..
 * @n: Holds the integer for the function.
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
        int i = n;

        while (1)
        {
                if (i < 98)
                {
                        i++;
                        printf("%d, ", i);
                }
                else if (i == 98)
                {
                        printf("%d\n", i);
                        break;
                }
                else
                {
                        i--;
                        printf("%d, ", i);
                }
        }
}
