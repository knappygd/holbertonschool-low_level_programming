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
	dlistint_t *buffer, *new;

	/*adds the head*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	buffer = *h;

	/*searhced backwards for the node*/
	while (idx != 1)
	{
		buffer = buffer->next;

		if (!buffer)
			return (NULL);

		idx--;
	}

	/*add a tail node if it's the last one*/
	if (!buffer->next)
		return (add_dnodeint_end(h, n));

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
