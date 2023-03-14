#include "main.h"
#include <stdlib.h>
/**
 * array_range - make an array of ints
 * @min: min int
 * @max: max int
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		array[i - min] = i;

	return (array);
}
