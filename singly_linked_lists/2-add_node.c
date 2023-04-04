#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node at the beginning of a list
 * @head: node
 * @str: value
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[len])
		len++;

	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
