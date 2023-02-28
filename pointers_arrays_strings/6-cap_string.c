#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - capitalize
 * @str: string
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i;

	while (str[i])
	{
		if (str[0] > 96 && str[0] < 123)
		{
			str[0] -= 32;
		}
		if (str[i] > 96 && str[i] < 123)
		{
			if (str[i - 1] == ' '
				|| str[i - 1] == '\t'
				|| str[i - 1] == '\n'
				|| str[i - 1] == ','
				|| str[i - 1] == ';'
				|| str[i - 1] == '.'
				|| str[i - 1] == '!'
				|| str[i - 1] == '?'
				|| str[i - 1] == '"'
				|| str[i - 1] == '('
				|| str[i - 1] == ')'
				|| str[i - 1] == '{'
				|| str[i - 1] == '}')
			{
				str[i] -= 32;
			}
		}

		i++;
	}


	return (str);
}
