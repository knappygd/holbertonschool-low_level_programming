#include <stdarg.h>
#include <stdio.h>
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

	if (separator == NULL)
		separator = "";

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, const unsigned int));
		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vl);

}
