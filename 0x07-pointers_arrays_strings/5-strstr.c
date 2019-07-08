#include "holberton.h"
/**
 * _strstr - Function that locates a substring.
 * @haystack: Pointer to the initial segment
 * @needle: Pointer to the acceptance segment
 *
 * Return: The pointer at matched position or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int len_long_str = strleng(haystack);
	int len_accept = strleng(needle);

	for (i = 0; i < len_long_str; i++)
	{
		if (*(haystack + i) == *(needle + j) && j < len_accept)
		{
			if (j == (len_accept - 1))
			{
				return ((haystack + i) - (len_accept - 1));
			}
			j++;
		}
		else
			j = 0;
	}
	return (NULL);
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
	{
		i++;
	}
	i++;
	return (i);
}
