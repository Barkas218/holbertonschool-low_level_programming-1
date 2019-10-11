#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - generate the index based on size and djb2 hash algorithm
 *
 * @key: Key
 * @size: Size of the hash table
 *
 * Return: Index formatted as unsigned long int
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int long_hash;
	unsigned long int index;

	if (size == 0)
		return (0);

	long_hash = hash_djb2(key);
	index = long_hash % size;

	return (index);
}
