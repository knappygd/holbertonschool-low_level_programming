#include <stdio.h>

/**
 * main - print argc
 * @argc: count
 * 
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d", argc - 1);

	return (0);
}
