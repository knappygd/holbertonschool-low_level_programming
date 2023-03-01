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
	int i;
	unsigned int len = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			len++;
		}
	}

	return (len);
}
