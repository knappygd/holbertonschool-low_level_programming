#include "search_algos.h"

/**
 * linear_search - A search algorithm using linear search, to look for
 * a value in an array of integers.
 * @array: A pointer to the first value of the array.
 * @size: The size of the array.
 * @value: The value to search for.
 * 
 * Return: The index at which the value was found, else -1.
*/
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (!array)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}