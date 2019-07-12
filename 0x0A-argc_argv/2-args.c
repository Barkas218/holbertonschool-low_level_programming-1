#include "holberton.h"
/**
 * main - Prints the number of arguments passed
 * @argc: Number of arguments passed
 * @argv: Pointer to array of arguments passed
 *
 * Return: 0 - Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
