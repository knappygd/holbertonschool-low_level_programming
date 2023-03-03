#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print matrices diagonal sums
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int is1 = 0, s1 = 0, is2 = 0, s2 = 0, max = size * size;

	while (is1 < max)
	{
		s1 += a[is1];
		is1 += size + 1;
	}

	while (is2 < max - size)
	{
		s2 += a[is2];
		is2 += size - 1;
	}

	printf("%d, %d", s1, s2);
}
