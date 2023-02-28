#include "main.h"
#include <string.h>
/**
 * string_toupper - to upper
 * @str: string
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
	}

	return (str);
}
