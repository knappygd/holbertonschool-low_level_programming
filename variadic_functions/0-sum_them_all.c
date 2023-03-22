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
	va_list vl;
	const unsigned int i;
	int sum = 0;

	va_start(vl, n);

	for (i = 0; i < count; i++)
		sum += va_arg(vl, const unsigned int);

	va_end(vl);
	return (sum);
}
