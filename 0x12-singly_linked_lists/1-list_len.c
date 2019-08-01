#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len -returns the number of elements in a linked list_t.
 * @h: Pointer to the actual position of the linked list (struct)
 *
 * Return: Size of the linked_list.
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + list_len(h->next));
}
