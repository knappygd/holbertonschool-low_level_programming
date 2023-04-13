#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *htable;

	htable = malloc(sizeof(hash_table_t));
	if (!htable)
		return (NULL);

	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (!htable->array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		htable->array[i] = NULL;
	}

	htable->size = size;

	return (htable);
}
