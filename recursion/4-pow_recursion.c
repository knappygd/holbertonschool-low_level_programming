#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - to the power of
 * @x: base
 * @y: power
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	int i = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		if (i <= y)
		{
			x = x * _pow_recursion(x, y - 1);
			i++;
		}
	}

	return (x);
}
