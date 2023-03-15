#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - strdup()
 * @str: string parameter
 *
 * Return: pointer to newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *scopy;
	int i = 0;

	scopy = malloc(sizeof(str) + 1);

	if (str == NULL)
		return (NULL);

	if (scopy == NULL)
		return (NULL);

	while (str[i])
	{
		scopy[i] = str[i];
		i++;
	}

	return (scopy);
}
