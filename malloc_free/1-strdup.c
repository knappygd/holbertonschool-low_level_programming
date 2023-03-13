#include "main.h"
#include <stdlib.h>

/**
 * _strdup - strdup()
 * @str: string parameter
 *
 * Return: pointer to newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *scopy = malloc(sizeof(str));
	int i = 0;

	if (str == NULL || scopy == NULL)
		return (NULL);

	while (str[i])
	{
		scopy[i] = str[i];
		i++;
	}

	return (scopy);
}
