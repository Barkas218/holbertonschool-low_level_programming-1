#include "holberton.h"
#include <stdlib.h>
/**
 * main - Prints the addition of the arguments
 * @argc: Number of arguments passed
 * @argv: Pointer to array of arguments passed
 *
 * Return: 0 - Success
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	unsigned int add = 0;

	for (i = 1; i < argc; i++)
	{
		while (*(*(argv + i) + j) != '\0')
		{
			if (*(*(argv + i) + j) < '0' || *(*(argv + i) + j) > '9'
			|| *(*(argv + i) + j) != '-')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		j = 0;

		if (atoi(argv[i]) > 0)
			add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
