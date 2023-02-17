#include "main.h"
#include <stdio.h>
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
			if (n != 98)
			{
				printf("%d", n);
				printf(", ");
			} 
			else
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n != 98)
			{
                                printf("%d", n);
                                printf(", ");;
			}
                        else
                        {
                                printf("%d", n);
                        }
		}
		printf("\n");
	}
	else 
	{
		printf("%d", n);
		printf("\n");
	}	
}
