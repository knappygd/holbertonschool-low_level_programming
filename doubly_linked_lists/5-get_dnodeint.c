#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @head: head
 * @index: node index
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (!head)
			return (NULL);

		head = head->next;
		index--;
	}

	return (head);
}
