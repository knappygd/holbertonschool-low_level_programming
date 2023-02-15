#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n < 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
