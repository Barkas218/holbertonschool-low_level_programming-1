#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Double pointer to the actual position of the linked list (struct)
 * @idx: Position for the new node.
 * @n: Number to be passed to the new node
 *
 * Return: Sum of the value of all nodes.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	int val = n;
	listint_t *new;
	listint_t *tmp = *head;

	if (tmp == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	while (i < (idx - 1))
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}

	new->n = val;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
