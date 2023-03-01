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
		for (i = 0; s[i]; i++)
		{
			if (s[i] == accept[i])
			{
				len++;
			}

			else if (s[i] == '\0')
			{
				return (len);
			}
		}
	}

	return (len);
}
