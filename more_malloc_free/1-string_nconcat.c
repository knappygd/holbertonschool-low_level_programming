#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - conc two strings using the first n bytes of s2
 * @s1: first str
 * @s2: second str
 * @n: bytes of second str
 *
 * Return: conc
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int i, len = strlen(s1);

	conc = malloc(sizeof(char) + (len + n + 1));

	for (i = 0; i < len; i++)
	{
		conc[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		conc[i + len] = s2[i];
	}

	return (conc);
}
