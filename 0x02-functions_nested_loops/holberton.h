#ifndef _HOLBERTON_
#define _HOLBERTON_

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int);
int _isalpha(int);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int);


int _putchar(char c)
{
	return (write(1, &c, 1));
}



#endif /* HOLBERTON */
