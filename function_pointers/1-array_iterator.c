#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a func multiple times
 * @array: the array
 * @size: array size
 * @action: pointer to the func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
