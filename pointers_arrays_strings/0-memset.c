#include "main.h"
#include <stddef.h>
/**
 * _memset - what memset does
 * @s: memory area
 * @b: const byte
 * @n: bytes
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= 98; i++)
	{
		if (i < n)
		{
			s[i] = b;
		}
	}

	return (s);
}
