#include "main.h"
/**
 * _strlen - string length
 * @s: string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s++)
	{
		length++;
	}

	return (length);
}
