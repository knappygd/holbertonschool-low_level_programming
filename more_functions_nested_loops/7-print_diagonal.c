#include "main.h"

/**
 * print_diagonal - print diagonal lines
 * @n: n length
 *
 */
void print_diagonal(int n)
{
	int i, r;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < n + 1; i++)
		{
			for (r = 0; r < n + 1; r++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
