#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: original number
 * @m: flipped number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xor = n ^ m, nbits = 0;

	while (xor)
	{
		xor &= (xor - 1);
		nbits++;
	}

	return (nbits);
}
