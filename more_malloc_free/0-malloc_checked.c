#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: bytes
 *
 * Return: m
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
