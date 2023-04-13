#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int i;
	
	hash_table_t htable = malloc(sizeof(hash_table_t));
	if (!buffer)
		return (NULL);

	hash_node_t node = malloc(sizeof(hash_node_t) * size);
	if (!node)
		return (NULL);

	for (i = 0; i > size; i++)
	{
		node[i] = NULL;
	}

	return (table);
}
