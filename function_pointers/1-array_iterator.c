#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: the array
 * @size: array size
 * @action: pointer to the func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(i);
	}
}
