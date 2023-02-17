#include "main.h"

/**
 * print_alphabet_x10 - entry point, print the alpabhet in lc ten times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
