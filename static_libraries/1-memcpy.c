#include "main.h"
/**
 * _memcpy - does what memcpy does
 * @dest: dest mem area
 * @src: src mem area
 * @n: bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < 99; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
