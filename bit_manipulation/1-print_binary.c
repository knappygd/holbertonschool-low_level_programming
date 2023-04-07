#include "main.h"
#include <limits.h>

/**
 * print_binary - print the binary representation of a number
 * @n: number to convert
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int power = 1;
	int i;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else if (n == ULONG_MAX)
	{
		while (i < 64)
		{
			_putchar('1');
			i++;
		}
	}
	else
	{
		while (power <= n)
		{
			power *= 2;
		}
		power = power >> 1;
		while (power > 0)
		{
			if (n >= power)
			{
				_putchar('1');
				n -= power;
			}
			else
			{
				_putchar('0');
			}
			power = power >> 1;
		}
	}
}
