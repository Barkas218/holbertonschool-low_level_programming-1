#include "holberton.h"
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers as arguments
 * @argc: Number of arguments passed
 * @argv: Pointer to array of arguments passed
 *
 * Return: 0 - Success
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}

		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
