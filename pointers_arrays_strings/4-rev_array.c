#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse an array
 * @a: array
 * @n: elements to swap
 */

void reverse_array(int *a, int n)
{
	int i, aux;

	for (i = n - 1; i >= n / 2; i--)
	{
		aux = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = aux;
	}
}
