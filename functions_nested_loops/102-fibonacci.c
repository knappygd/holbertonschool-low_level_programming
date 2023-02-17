#include <stdio.h>
/**
 * main - print fibseq
 *
 * Return: 0
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, next = n1 + n2;
	int i;

	for (i = 0; i <= 50; i++)
	{
		printf("%ld, ", next);

		n1 = n2;
		n2 = next;
		next = n1 + n2;
	}
	printf("\n");

	return (0);
}
