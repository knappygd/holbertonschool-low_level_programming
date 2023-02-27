#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char aux;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		aux = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = aux;
	}
}
