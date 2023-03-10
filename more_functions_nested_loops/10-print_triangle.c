#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
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

			for (area = 0; area < height; area++)
			{
				_putchar('#');
			}

			if (height == size)
			{
				continue;
			}

			_putchar('\n');
		}
		_putchar('\n');
	}
}
