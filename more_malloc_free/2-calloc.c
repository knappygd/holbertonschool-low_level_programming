#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: elements count
 * @size: elements bytes
 *
 * Return: pointer to alloc mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	array = malloc(nmemb * size);

	array = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	return (array);
}
