#include "main.h"

/**
 * print_triangle - print a triangle
 */
void print_triangle(int size)
{
	int height, spaces;

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
			_putchar('#');
			_putchar('\n');
		}
	}
}
