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
		for (i = 1; i < n; i++)
		{
			for (r = 0; r < i; r++)
			{
				_putchar(' ');
			}	
			_putchar('\\');
			_putchar('\n');
		}
	}
}
