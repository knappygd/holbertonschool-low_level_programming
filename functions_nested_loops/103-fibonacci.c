#include <stdio.h>
/**
 * main - print fibseq
 *
 * Return: 0
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, next = n1 + n2;
	float res;

	while (1)
	{
		next = n1 + n2;

		if (next > 4000000)
		{
			break;
		}

		if ((next % 2) == 0)
		{
			res += next;
		}

		n1 = n2;
		n2 = next;
	}
	printf("%.0f\n", res);

	return (0);
}
