#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: Head pointer
 * @index: Index
 *
 * Return: 1 - success or -1 - failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodeToDelete;
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		tmp = tmp->next;

		if (tmp == NULL)
			return (-1);
		i++;
	}

	if (tmp->next == NULL)
	{
		free(tmp);
		if (*head == tmp)
			*head = NULL;
	}
	else
	{
		nodeToDelete = tmp->next;
		tmp->n = tmp->next->n;
		tmp->next = tmp->next->next;
		free(nodeToDelete);
	}

	return (1);
}
