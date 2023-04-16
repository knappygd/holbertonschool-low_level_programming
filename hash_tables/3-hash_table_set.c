#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the k/v
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if succeeded, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hast_node_t *new;

	if (!ht || !key)
		return (0);

	if (!value)
		value = "";

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	


}
