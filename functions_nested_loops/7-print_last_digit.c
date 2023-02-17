#include "main.h"
/**
 * print_last_digit - entry, return the value of last digit
 *
 * @n: int to check
 * @last: last digit of n
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (n > 0)
	{
		_putchar(last + 48);
		return (last);
	}
	else
	{
		_putchar(-last + 48);
		return (-last);
	}
}
