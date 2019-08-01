#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list -frees a list_t list.
 * @head: Pointer to the actual position of the linked list (struct)
 *
 * Return: Size of the linked_list.
 */
void free_list(list_t *head)
{
	list_t *actual_node;
	list_t *next_node;

	actual_node = head;

	while (actual_node != NULL)
	{
		next_node = actual_node->next;
		free(actual_node->str);
		free(actual_node);
		actual_node = next_node;
	}
}
