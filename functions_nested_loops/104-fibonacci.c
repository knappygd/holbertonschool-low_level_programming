#include <stdio.h>
/**
 * main - print fibseq
 *
 * Return: 0
 */
int main(void)
{
	float n1 = 0, n2 = 1, next = n1 + n2;
	int i;

	for (i = 0; i < 98; i++)
	{
		printf("%f", next);

		n1 = n2;
		n2 = next;
		next = n1 + n2;

		if (i == 97)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
