#include <stdio.h>
/**
 * main - print fibseq
 *
 * Return: 0
 */
int main(void)
{
	int n1 = 0;
	int n2 = 1;
	int next = n1 + n2;
	int i;

	for (i = 0; i <= 50; i++)
	{
		printf("%d, ", next);
		printf("\n");

		n1 = n2;
		n2 = next;
		next = n1 + n2;
	}

	return (0);
}
