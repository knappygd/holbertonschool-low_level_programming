#include "lists.h"

/**
 * dlistint_len - number of elements in a dlistint list
 * @h: header
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
