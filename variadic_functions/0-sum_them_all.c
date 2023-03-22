#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum numbers
 * @n: the numbers
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n,...)
{
	va_list ap;
	int i, sum;

	va_start (ap, count);

	sum = 0;
	for (i = 0; i < count; i++)
		sum += va_arg (ap, int);

	va_end (ap);
	return sum;
}
