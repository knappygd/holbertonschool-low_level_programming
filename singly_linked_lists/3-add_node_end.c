#include "lists.h"

/**
 * add_node_end - add a new node at the end of the list
 * @head: list
 * @str: value
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new, *end;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
