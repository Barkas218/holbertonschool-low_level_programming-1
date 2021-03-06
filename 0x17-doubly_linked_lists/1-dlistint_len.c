#include "lists.h"

/**
 * dlistint_len - print the lenght of the list
 * @h: Head pointer
 *
 * Return: Number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *tmp;

	tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	return (i);
}
