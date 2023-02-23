#include <stdio.h>

/**
 * main - find prime factor
 */
int main(void)
{
	long n = 612852475143;
	int d;

	while (d < (n / 2))
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}

		for (d = 3; d < (n / 2); d += 2)
		{
			if ((n % d) == 0)
			{
				n /= d;
			}
		}

		printf("%ld", n);

		return (0);
	}
}
