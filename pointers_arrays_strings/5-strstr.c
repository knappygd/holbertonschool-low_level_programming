#include "main.h"
/**
 * _strstr - same as strstr
 * @haystack: string
 * @needle: substring
 * Return: pointer to occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*needle == haystack[i])
			{
				return (haystack);
			}
		}

		haystack++;
	}

	return (0);
}
