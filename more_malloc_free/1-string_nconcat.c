#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
	unsigned int i, len = strlen(s1), len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	if (n < len2)
	{
		n = len2;
	}

	conc = malloc(sizeof(char) * (len + len2) - 1);

	if (conc == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		conc[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		conc[i + len] = s2[i];
	}

	conc[i + len] = '\0';

	return (conc);
}
