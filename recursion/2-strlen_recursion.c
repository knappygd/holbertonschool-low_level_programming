#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - strlen
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return(1 + _strlen_recursion (s + 1));
	}
	return (0);
}
