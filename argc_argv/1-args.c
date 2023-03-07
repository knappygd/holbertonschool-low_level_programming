#include <stdio.h>

/**
 * main - print argc
 * @argc: count
 * @argv: unused
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
