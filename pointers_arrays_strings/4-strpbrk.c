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

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			return (s + i);
		}

	}

	return (0);
}
