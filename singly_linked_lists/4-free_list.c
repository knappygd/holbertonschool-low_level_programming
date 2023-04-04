#include "lists.h"

/**
 * free_list - frees a list
 * @head: list head node
 */
void free_list(list_t *head)
{
	list_t *buffer;

	while (head != NULL)
	{
		buffer = head;
		head = head->next;
		free(buffer->str);
		free(buffer);
	}

	free(head);
}
