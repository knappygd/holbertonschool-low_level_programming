#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given position
 * @h: head
 * @idx: index of the list where the node should be added
 * @n: value
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *buffer = *h;
	dlistint_t *new;

	if (idx == 0)
		new = add_dnodeint(h, n);

	while (idx != 1)
	{
		buffer = buffer->next;

		if (!buffer)
			return (NULL);
	}

	if (!buffer->next)
		new = add_dnodeint_end(h, n);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = buffer;
	new->next = buffer->next;
	buffer->next->prev = new;
	buffer->next = new;

	return (new);
}
