#include "main.h"

/**
 * print_alphabet_x10 - entry point, print the alpabhet in lc ten times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int c;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
