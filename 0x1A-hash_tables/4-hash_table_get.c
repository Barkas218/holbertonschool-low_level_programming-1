#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieve a value for a key from the hash table
 *
 * @ht: Hash table pointer
 * @key: Key
 *
 * Return: Pointer to the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size;
	unsigned long int index;
	hash_node_t *actual_node;

	if (ht == NULL)
		return (NULL);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	actual_node = ht->array[index];

	if (actual_node == NULL)
		return (NULL);

	while (actual_node != NULL)
	{
		if (strcmp(actual_node->key, key) == 0)
			return (actual_node->value);

		actual_node = actual_node->next;
	}
	return (NULL);
}
