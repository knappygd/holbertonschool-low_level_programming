#include "main.h"
#include <stdio.h>

/**
 * prime_up - do prime or not
 * @n: prime
 * @i: checker 1
 * @j: checker 2
 *
 * Return: result
 */
int prime_up(int n, int i, int j)
{
	if (i * j == n && j != n)
	{
		return (1);
	}

	if (i < n)
	{
		i++;
		return (prime_up(n, i, j));
	}

	if (i == n && j != n)
	{
		j++;
		return (prime_up(n, 1, j));
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
