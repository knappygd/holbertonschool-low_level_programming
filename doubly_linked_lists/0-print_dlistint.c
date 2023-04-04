#include "lists.h"

/**
 * print_dlistint - prints a dlistint list
 * @h: header
 *
 * Return: number of nodes
 */
/*size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%u\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}*/
size_t print_dlistint(const dlistint_t *h)
{
    int nodes = 0;

    while (h)
    {
        printf("%u\n", h->n);

        nodes++;
        h = h->next;
    }

    return (nodes);
}

