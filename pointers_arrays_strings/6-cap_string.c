#include "main.h"
/**
 * cap_string - capitalize
 * @str: string
 */
char *cap_string(char *str)
{
	int i;

	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (str[i - 1] == ' ')
			{
				str[i] -= 32;
			}
		}

		i++;
	}


	return (str);
}
