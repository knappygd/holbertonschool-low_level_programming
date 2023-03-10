#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{

			if (isalpha(argv[i][j]) != 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		conv = strtol(argv[i], &p, 10);
		res += conv;

	}

	printf("%d\n", res);
	return (0);
}
