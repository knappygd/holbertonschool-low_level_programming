#include "hash_tables.h"

/**
 * hash_table_ge - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key to search for the value
 *
 * Return: the value associated with a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t node;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (!ht || !key)
		return (NULL);

	node = ht->array[index];
	while (node->key != key)
		node = node->next;

	return (node->value);
}
