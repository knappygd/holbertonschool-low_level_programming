#include <stdio.h>
#include <string.h>
/**
 * main - print fibseq
 *
 * Return: 0
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, sum = n1 + n2, half;
	int i;
	char buffer[50];

	for (i = 0; i < 98; i++)
	{
		printf("%ld, ", sum);

		n1 = n2;
		n2 = sum;
		sum = n1 + n2;

		sprintf(buffer, "%lu", sum);

		if (strlen(buffer) > 19)
		{
			half = sum % 10000000000;
			printf("%lu, ", half);

		}
	}

	return (0);
}
