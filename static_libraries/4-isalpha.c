#include "main.h"

/**
 * _isalpha - entry point, evaluate if char is alphabetic
 * @c: char variable to evaluate to
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
