#include "main.h"
#include <string.h>
#include <limits.h>
#include <stdlib.h>

/**
 * _print_binary - transform to binary
 * @n: decimal
 *
 * Return: bin string
 */
char *_print_binary(unsigned long int n)
{
	unsigned long int power = 1;
	int i;
	char *bin;
	char append;

	bin = (char *)malloc(sizeof(power));
	if (n == 0)
	{
		return ("0");
	}
	else if (n == 1)
	{
		return ("1");
	}
	else if (n == ULONG_MAX)
	{
		append = '1';
		while (i < 64)
		{
			strncat(bin, &append, 1);
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
				append = '1';
				strncat(bin, &append, 1);
				n -= power;
			}
			else
			{
				append = '0';
				strncat(bin, &append, 1);
			}
			power = power >> 1;
		}
	}
	return (bin);
}

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: which digit to check
 *
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	_print_binary(n);

	while (_print_binary(n)[i])
	{
		if (i == index)
		{
			return(_print_binary(n)[i]);
		}
		else
		{
			return (-1);
		}

		i++;
	}
}
