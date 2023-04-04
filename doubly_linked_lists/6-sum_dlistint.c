#include "lists.h"

/**
 * sum_dlistint - sum all the data (n) of a dlistint linked list
 * @head: list head
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;

		head = head->next;
	}

	return (sum);
}
