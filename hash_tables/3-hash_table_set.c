#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the k/v
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if succeeded, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
    hash_node_t *h;
    unsigned long int res, j;
    if (ht == NULL)
        return 0;

    if (key == NULL)
        return 0;

    if (value == NULL)
        value = "";

    h = malloc(sizeof(hash_node_t));
    if (h == NULL) {
        return 0;
    }
    h->key = strdup(key);
    h->value = strdup(value);
    res = key_index((unsigned char *)key, ht->size);

    if (res >= ht->size) {
        free(h->key);
        free(h->value);
        free(h);
        return -1; // Return an error code instead of 0
    }

    if (ht->array[res]->value == NULL) {
        free(ht->array[res]->key); // Free the existing key if it exists
        free(ht->array[res]->value); // Free the existing value if it exists
        ht->array[res]->key = strdup(h->key); // Assign the key string itself, not the pointer
        ht->array[res]->value = strdup(h->value);
        free(h->key);
        free(h->value);
        free(h);
        return 1;
    } else {
        for (j = res; j < ht->size; j++) {
            if (ht->array[j]->value == NULL) {
                free(ht->array[j]->key); // Free the existing key if it exists
                free(ht->array[j]->value); // Free the existing value if it exists
                ht->array[j]->key = strdup(h->key); // Assign the key string itself, not the pointer
                ht->array[j]->value = strdup(h->value);
                free(h->key);
                free(h->value);
 				free(h);
				return 1;
			}
		}
	}
	free(h->key);
	free(h->value);
	free(h);
	return (0);
}

