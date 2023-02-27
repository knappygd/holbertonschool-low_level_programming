#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 */
void rev_string(char *s)
{
	int i;
       	int len = strlen(s);

	for (i = len - 1; i >= len / 2; i--)
	{
		_putchar(s[i]);
	}
}
