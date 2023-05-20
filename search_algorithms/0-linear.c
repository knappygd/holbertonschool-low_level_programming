#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    int i;

    if (!array)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]", i, array[i]);
        if (array[i] == value)
        {
            printf("Found %d at index: %d", value, i);
            return (i);
        }
    }

    return (-1);
}