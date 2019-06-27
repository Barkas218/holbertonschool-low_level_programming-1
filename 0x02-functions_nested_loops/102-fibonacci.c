#include <stdio.h>
/**
 * main - Get the first 50 Fibonnaci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int first = 1;
	long int second = 1;
	long int sum;

	printf("%d", 1);
	for (i = 1; i <= 47; i++)
	{
		sum = first + second;
		printf(", %ld", sum);
		first = second;
		second = sum;
	}

	printf("%ld\n", sum);

	return (0);
}
