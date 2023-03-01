#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strspn - same as strspn
 * @s: source string
 * @accept: string to check
 *
 * Return: number of bytes of the original segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int len = 0;

	while (*s++)
	{
		while (s[i] != '\0')
		{
			if (s[i] == accept[i])
			{
				len++;
			}

			i++;
		}

	}

	return (len);
}
