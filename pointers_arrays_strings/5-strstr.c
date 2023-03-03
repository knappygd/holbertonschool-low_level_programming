#include "main.h"
#include <string.h>
/**
 * _strstr - same as strstr
 * @haystack: string
 * @needle: substring
 * Return: pointer to occurence
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n = needle;

	if (strlen(needle) == 0)
	{
		return (haystack);
	}

	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *n)
		{
			continue;
		}

		h = haystack;
		while (*haystack)
		{
			if (*n == 0)
			{
				return (haystack);
			}
			if (*h++ != *n++)
			{
				break;
			}
		}

		n = needle;

	}

	return (0);
}
