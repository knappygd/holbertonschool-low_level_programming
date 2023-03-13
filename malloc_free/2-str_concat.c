#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *conc;

	/*if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";*/
	
	conc = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		conc[i + len1] = s2[i];
	}

	/*while (s2[i] != '\0')
	{
		i++;
	}

	while (s1[n] != '\0')
	{
		s2[i] = s1[n];
		i++;
		n++;
	}*/

	conc[len1 + len2] = '\0';

	return (conc);
}
