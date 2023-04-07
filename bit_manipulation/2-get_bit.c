#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: which digit to check
 *
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0)
		return (0);

	while (i < 64)
	{
		if (i == index)
		{
			return (n & 1);
		}

		i++;
		n >>= 1;
	}

	return (-1);
}
