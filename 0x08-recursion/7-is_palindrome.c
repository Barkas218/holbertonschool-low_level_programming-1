#include "holberton.h"
/**
 * is_palindrome - Function that returns if the string is a palindrome
 * @s: Pointer to a string
 *
 * Return: 1 - Palindrome | 0 - Not palindrome.
 */
int is_palindrome(char *s)
{
        return (get_palindrome(s, 0, strleng(s) - 1, strleng(s)));
}
/**
 * get_palindrome - Function that returns if the string is a palindrome
 * @s: Pointer to a string
 * @i: Iterator
 * @j: Iterator
 * @k: Length of the string
 *
 * Return: 1 - Palindrome | 0 - Not palindrome.
 */
int get_palindrome(char *s, int i, int j, int k)
{
        if (k == 0)
                return (1);
        if (*(s + i) == *(s + j))
        {
                if (j == 0)
                        return (1);
                else
                        return (get_palindrome(s, ++i, --j, k));
        }
        return (0);
}


/**
 * strleng - Function that gets the length of a string.
 * @a: Pointer to a string
 *
 * Return: Length of the string (int)
 */
int strleng(char *a)
{
        int i = 0;
        while (a[i] != '\0')
                i++;
        return (i);
}
