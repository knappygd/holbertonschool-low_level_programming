#include "main.h"

/**
 * print_triangle - print a triangle
 */
void print_triangle(int size)
{
	int height, length;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height < size + 1; height++)
		{
			_putchar('#');
		}
	}
}
