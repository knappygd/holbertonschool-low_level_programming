#include "main.h"
/**
 * print_to_98 - print nums from n to 98
 * @n: parameter in question
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			puts(n);
			printf(", ");
		}
	}
	else if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			puts(n);
			printf(", ");
		}
	else 
	{
		puts(n);
	}	
}
