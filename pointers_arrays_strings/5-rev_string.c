#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 */
void rev_string(char *s)
{
	int i, len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i--]);
	}
}
