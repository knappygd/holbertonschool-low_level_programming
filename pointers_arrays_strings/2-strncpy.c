#include "main.h"
#include <string.h>

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
	int i = 0, len = strlen(src);

	for (i = 0; i < len; i++)
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
