#include "main.h"

/**
 * print_triangle - print a triangle
 */
void print_triangle(int size)
{
	int height, area;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height < size + 1; height++)
		{
			for (area = size - height; area > 0; area--)
			{
				_putchar(' ');
			}

			for (area = 0; area < size + 1; area++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
