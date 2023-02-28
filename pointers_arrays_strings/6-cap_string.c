#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - capitalize
 * @str: string
 */
char *cap_string(char *str)
{
	int i;

	while (str[i])
	{
		if (strlen(str) == 0)
		{
			printf("\n\n");
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
