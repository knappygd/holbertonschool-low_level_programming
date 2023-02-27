#include "main.h"
#include <stdio.h>
/**
 * print_array - print an array
 * @a: array
 * @n: times
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}
}
