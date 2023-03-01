#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination buffer
 * @src: strig to copy
 * @n: limit
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*src++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}

		i++;
	}

	dest[i] = '\0';

	return (dest);
}
