#include "main.h"
#include <math.h>
/**
 * square_up - do the deed
 */
int square_up(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}

	if (r == n / 2 || n < 0)
	{
		return (-1);
	}

	r++;
	return (square_up(n, r));
}

/**
 * _sqrt_recursion - sqrt
 * @n: sqrt num
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n == 1)
	{
		return (1);
	}

	return (square_up(n, r));
}
