#include <stdio.h>

/**
 * main - print args received
 * @argc: count
 * @arg: args entered
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
