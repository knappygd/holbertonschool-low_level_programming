#include "main.h"

/**
 * binary_to_uint - convert a binary number into a uint
 * @b: 1s and 0s string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0, multiplier = 1;

	if (!b)
		return (0);

	while (b)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		i++;
	}

	while (b)
	{
		if (b[i] == 1)
		{
			num += multiplier;		
		}

		multiplier *= 2;
	}

	return (num);
}

