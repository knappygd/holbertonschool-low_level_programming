#include "function_pointers.h"

/**
 * int_index - search for a number
 * @array: the array of numbers
 * @size: array size
 * @cmp: function pointer used to search for the number
 *
 * Return: result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
