#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - smae as strchr
 * @s: string to scan
 * @c: chat to locate
 *
 * Return: pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}

		if (c == '\0')
		{
			s = '\0';
			printf("test");
		}
	}

	return (0);
}
