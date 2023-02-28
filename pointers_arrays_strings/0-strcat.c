#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: str1
 * @src: str2
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}

	dest[i] = '\0';

	return (dest);
}
