#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: list head
 * @index: node to delete
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *buffer;

	if (!*head)
		return (-1);

	buffer = *head;

	while (index != 0)
	{
		if (!buffer)
			return (-1);

		buffer = buffer->next;

		index--;
	}

	if (buffer == *head)
	{
		*head = buffer->next;

		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		buffer->prev->next = buffer->next;

		if (buffer->next)
			buffer->next->prev = buffer->prev;
	}

	free(buffer);
	return (1);
}
