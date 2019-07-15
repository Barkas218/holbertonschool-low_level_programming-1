#include "holberton.h"
#include <stdlib.h>
/**
 * get_change - Prints the minimum number of coins for change
 * @n: Number of cents to get change
 *
 * Return: 0 - Success
 */
void get_change(int n)
{
	int left;
	int num;
	int i;
	int count;
	int coins[] = {25, 10, 5, 2, 1};

	left = n;
	count = 0;

	if (n > 0)
	{
		for (i = 0; i < 5; i++)
		{
			num = left / coins[i];
			left = left - (coins[i] * num);
			count += num;
		}
	}
	printf("%d\n", count);
}

/**
 * main - Prints the minimum number of coins for change
 * @argc: Number of arguments passed
 * @argv: Pointer to array of arguments passed
 *
 * Return: 0 - Success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	get_change(atoi(argv[1]));
	return (0);
}
