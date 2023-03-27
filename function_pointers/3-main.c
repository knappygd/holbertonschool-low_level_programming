#include "3-calc.h"

/**
 * main - main calc function
 * @argc: arg count
 * @argv: arg values
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	char *optr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	optr = argv[2];

	if (get_op_func(optr) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (n2 == 0 && (*optr == '/' || *optr == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(optr)(n1, n2));

	return (0);

}
