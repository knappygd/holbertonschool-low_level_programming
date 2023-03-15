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
	int len = strlen(str);
	
	if (str == NULL)
		return (((void*)0));

	scopy = (char *)malloc(sizeof(char) * (len + 1));


	if (scopy == NULL)
		return (NULL);

	while (str[i])
	{
		scopy[i] = str[i];
		i++;
	}

	return (scopy);
}
