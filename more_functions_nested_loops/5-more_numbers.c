#include "main.h"

/**
 * more_numbers - prints numbers
 *
 * Return: idk
 */
void more_numbers(void)
{
	int i, n, x, c;

	for (i = 0; i < 10; i++)
	{
		for (n = 48; n < 64; n++)
		{
			_putchar(n);
			
			if (n >= 58)
			{
				for (x = 0; x < 5; x++)
				{
					for (c = 48; c < 54; c++)
					{
						_putchar(n + c);
					}
				}
			}
		}
	}
}
