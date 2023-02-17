#include <stdio.h>
/**
 * main - print sum of multiples
 *
 * Return: sum
 */
int main(void)
{
	int n;
	int res;

	for (n = 0; n < 1000; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			res += n;
		}
	}

	return (res);
}
