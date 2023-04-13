#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key
 * @key: the key
 * @size: array size of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !size)
		return (NULL);

	return (hash_djb2(key) * size);
}
