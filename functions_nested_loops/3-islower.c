#include "main.h"

/**
 * _islower - entry point, check for lc char
 *
 * Return: 0 or 1
 */
int _islower(int n)
{
	if (n >= 'a' && n <= 'z')
		return (0);
	else
		return (1);
}
