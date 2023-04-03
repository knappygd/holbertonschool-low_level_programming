#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elelments if a list_t list
 * @h: struct
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s", h->str, h->len);

		n++;
	}


	return (n);
}
