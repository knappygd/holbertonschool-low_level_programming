#include "main.h"
/**
 * factorial - facts
 * @n: number 
 *
 * Return: result
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
