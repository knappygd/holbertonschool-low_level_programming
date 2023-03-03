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
	int i;
	
	if (strlen(needle) == 0)
		return (haystack);

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (needle[i] == haystack[i])
			{
				while (needle[i + 1] != '\0')
				{
					if (haystack[i + 1] == ' ')
						return (haystack);
			}
		}


		haystack++;
	}

	return (0);
}
