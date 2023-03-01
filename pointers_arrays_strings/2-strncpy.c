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
	int i, len = 0;

	while (*src++)
		len++;

	for (i = 0; src[i] < len; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}

		while (i < n)
		{
			dest[i++] = '\0';
		}
	}

	return (dest);
}
