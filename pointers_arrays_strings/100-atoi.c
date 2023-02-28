#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - convert from str to int
 * @s: string
 *
 * Return: s
 */
int ctoi(char c)
{
	int i = (int)c;
	return (i - '0');
}

int _atoi(char *s)
{
	int i, n = 0;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			n *= 10;
			n += ctoi(s[i]);
		}

		else
		{
			printf("xd");

		}
	}

	printf("%d", n / 10);

	return (0);
}
