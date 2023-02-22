#include "main.h"

/**
 * print_triangle - print a triangle
 */
void print_triangle(int size)
{
	int height, spaces, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height < size + 1; height++)
		{
			for (spaces = size; spaces >= 0; spaces--)
			{
				_putchar(' ');
			}
			for (tr = 0; tr < size + 1; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
