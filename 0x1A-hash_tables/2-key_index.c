#include "hash_tables.h"

/**
 * key_index - Function that generates a distributed index.
 * @key: Key passed
 * @size: Size of the hash tables.
 *
 * Return: The key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
