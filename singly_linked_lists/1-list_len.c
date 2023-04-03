#include <stdio.h>
#include "lists.h"

/**
 * print_len - returns the number of elements in a linked list
 * @h: struct
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
