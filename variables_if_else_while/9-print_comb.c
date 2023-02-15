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
		if (n != 58 && n != 48)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(n);
	}
	putchar('\n');

	return (0);
}
