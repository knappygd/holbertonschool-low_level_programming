#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers separated with a separator
 * @separator: separator string
 * @n: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		printf(va_arg(vl, const unsigned int));
		if (n != i - 1)
			printf(", ");
	}

	va_end(vl);

	return (0);
}
