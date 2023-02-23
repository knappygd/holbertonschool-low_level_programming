#include "main.h"

/**
 * print_number - print numbers
 */
void print_number(int n)
{
	unsigned int ln = n;

	if (n < 0)
	{
		_putchar('-');
		ln = -ln;
	}

	if (ln / 10 > 0)
	{
		print_number(ln / 10);
	}

	_putchar((ln % 10) + '0');
}
