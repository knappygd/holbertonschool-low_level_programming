#include "main.h"
/**
 * puts_half - print last half of chars
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int half;

	while (str[i++])
		len++;

	if (len % 2 == 0)
		half = len / 2;
	else 
		half = (len - 1) / 2;

	for (i = half; i <= len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
	
