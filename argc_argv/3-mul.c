#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: count
 * @argv: args entered
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int res;
	char *p;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int fconv = strtol(argv[1], &p, 10);
		int sconv = strtol(argv[2], &p, 10);

		res = fconv * sconv;

		printf("%d\n", res);
	}

	return (0);
}
