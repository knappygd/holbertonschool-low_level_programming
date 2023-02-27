#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination buffer
 * @src: strig to copy
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
