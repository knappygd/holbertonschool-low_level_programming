#include "lists.h"

/**
 * free_list - frees a list
 * @head: list head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buffer;

	while (head != NULL)
	{
		buffer = head;
		head = head->next;
		free(buffer->next);
	}

	free(head);
}
