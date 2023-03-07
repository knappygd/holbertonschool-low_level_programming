#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers
 * @argc: count
 * @argv: args entered
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int res, conv;
	char *p = '\0';
	int i;

	for (i = 1; i < argc; i++)
	{

		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			conv = strtol(argv[i], &p, 10);
			res += conv;
		}


	}

	printf("%d\n", res);
	return (0);
}
