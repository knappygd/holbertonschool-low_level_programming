#include "main.h"

/**
 * _strncat - concatenate strings n limit
 * @dest: str1
 * @src: str2
 * @n: limit
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	
	if (n > src)
	{
		n = src;
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}

	dest[i] = '\0';

	return (dest);
}
