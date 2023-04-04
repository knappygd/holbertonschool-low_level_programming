#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - add a new node at the beginning of a list
 * @head: node
 * @n: value
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;
	
	*head = new;

	return (new);
}
