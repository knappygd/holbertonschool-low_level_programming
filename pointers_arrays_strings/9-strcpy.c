#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination buffer
 * @src: strig to copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] + 1)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
