#include <stdio.h>
/**
 * main - Get the even Fibonnaci numbers up to 4 million
 *
 * Return: Always 0.
 */

int main(void)
{
	long int i;
	long int first = 1;
	long int second = 2;
	long int sum;

	printf("%d", 2);
	for (i = 1; i < 4000000 ; i++)
	{
		sum = first + second;
		if (sum % 2 == 0)
			printf(", %ld", sum);
		first = second;
		second = sum;
	}

	printf("\n");

	return (0);
}
