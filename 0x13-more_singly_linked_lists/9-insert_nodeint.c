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

	if (idx == 0)
		add_nodeint(head, n);

	while (i < (idx - 1))
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = val;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}

/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 * @head: Pointer to the actual position of the linked list (struct)
 * @n: Value to include in the new node
 *
 * Return: Size of the linked_list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new;
        int val = n;

        if (head == NULL)
                return (NULL);

        new = malloc(sizeof(listint_t));

        if (new == NULL)
                return (NULL);

        new->n = val;
        new->next = *head;
        *head = new;

        return (*head);
}
