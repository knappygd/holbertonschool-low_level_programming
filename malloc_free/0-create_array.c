#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: array size
 * @c: content
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
