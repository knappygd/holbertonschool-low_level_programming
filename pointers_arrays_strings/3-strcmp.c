#include "main.h"
#include <string.h>
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 < len2)
		return (-(len2 - len1));
	else if (len1 > len2)
		return (len1 - len2);
	else
		return (0);
}
