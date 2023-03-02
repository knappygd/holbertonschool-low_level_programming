#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - same as strchr
 * @s: string to scan
 * @accept: string with occurence
 *
 * Return: pointer to the first occurence of c in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*accept)
	{
		for (i = 0; s[i]; i++)
		{
			if (s[i] == accept[i])
			{
				return (s + i);
			}

		}

		accept++;
	}

	return (0);
}
