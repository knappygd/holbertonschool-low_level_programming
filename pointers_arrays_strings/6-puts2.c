#include "main.h"
#include <string.h>
/**
 * _puts - print a string
 * @str: pointer
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
