#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: Head pointer
 * @idx: Index
 * @n: Value
 *
 * Return: Node or NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i = 0;

	tmp = *h;

	if (tmp == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	while (i < idx)
	{
		tmp = tmp->next;

		if (tmp == NULL)
			return (NULL);

		i++;
	}

	if (tmp == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}

	new->prev = tmp->prev;
	new->next = tmp;
	if (idx > 0)
		tmp->prev->next = new;
	else
		*h = new;
	tmp->prev = new;

	return (new);
}
