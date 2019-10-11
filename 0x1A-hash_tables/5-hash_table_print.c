#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - print a hash table
 *
 * @ht: Hash table pointer
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int size;
	unsigned int number_of_nodes;
	hash_node_t *element;

	i = 0;
	number_of_nodes = 0;
	printf("{");
	if (ht == NULL)
	{
		printf("}\n");
		return;
	}
	size = ht->size;

	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			element = ht->array[i];
			while (element != NULL)
			{
				if (number_of_nodes > 0)
					printf(", ");
				printf("'%s': ", element->key);
				printf("'%s'", element->value);
				number_of_nodes++;
				element = element->next;
			}
		}

	}
	printf("}\n");
}
