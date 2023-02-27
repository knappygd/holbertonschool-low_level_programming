#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 */
void rev_string(char *s)
{
	int i;
	int len = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		_putchar(s[i]);
	}
}
