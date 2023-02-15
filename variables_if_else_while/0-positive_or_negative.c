#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		puts("%d is positive", n);
	} 
	else if (n < 0)
	{
		puts("%d is negative", n);
	}
	else
	{
		puts("%d is zero", n);
	}
	return (0);
}
