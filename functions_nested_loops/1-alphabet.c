#include "main.h"

/**
 * print_alphabet - entry point, print the alphabet in lc
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
