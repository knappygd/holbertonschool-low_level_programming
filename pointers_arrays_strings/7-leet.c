#include "main.h"
/**
 * leet - leetstring
 * @str: string
 *
 * Return: string
 */
char *leet(char *str)
{
	int i, j;
	char leet[] = {'a', 'e', 'o', 't', 'l'};
	char nums[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (str[i] == leet[j] || str[i] + 32 == leet[j])
			{
				str[i] = nums[j];
				j = 4;
			}
		}
	}

	return (str);
}
