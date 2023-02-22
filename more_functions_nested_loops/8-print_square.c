#include "main.h"

/**
 * print_square - print a square
 * @size: the size of the square
 */
void print_square(int size)
{
	int height, length;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height < size; height++)
		{
			for (length = 1; length < height; lenght++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
