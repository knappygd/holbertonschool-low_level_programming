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
        printf("Node value: %u\n", h->n);
        printf("Prev node address: %p\n", (void *) h->prev);
        printf("Next node address: %p\n", (void *) h->next);

        nodes++;
        h = h->next;
    }

    printf("Total number of nodes: %d\n", nodes);
    return (nodes);
}

