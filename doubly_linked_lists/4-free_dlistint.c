#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: list head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buffer;

	while (head)
	{
		buffer = head->next;
		/*head = head->next;*/
		free(head);
		head = buffer;
	}

	/*free(head);*/
}
