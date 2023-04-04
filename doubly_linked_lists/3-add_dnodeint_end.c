#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a dlistint list
 * @head: head
 * @n: value
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{

		end = *head;

		while (end->next)
			end = end->next;

		end->next = new;
		new->prev = end;
	}

	return (new);
}
