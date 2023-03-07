#include "main.h"
#include <stdio.h>

int prime_up(int n, int i, int j)
{
	if (i * j == n && j != n)
	{
		return (1);
	}

	if (i < n)
	{
		return (prime_up(n, (i + 1), j));
	}

	if (i == n && j != n)
	{
		return (prime_up(n, 1, (j + 1)));
	}

	return (0);
}

/**
 * is_prime_number - check if prime
 * @n: num to check
 *
 * Return: true or false
 */
int is_prime_number(int n)
{
	return (prime_up(n, 1, 1));
}
