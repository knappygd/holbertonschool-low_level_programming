#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers separated with a separator
 * @separator: separator string
 * @n: numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vl;
	char *string;

	if (separator == NULL)
		separator = "";

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(vl, char *);

		printf("%s", string);

		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vl);

}