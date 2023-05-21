#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array using the
 * binary search algorithm.
 * @array: A pointer to the first value of an array of integers.
 * @size: The size of the given array.
 * @value: The value to search for in the array.
 *
 * Return: The index at which the value was found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int i = 0, left, right;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; left++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		print(i, left, right, array);

		if (array[i] == value)
			return (i);

		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}