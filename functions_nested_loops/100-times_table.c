#include "main.h"
/**
 * times_table - print the 9 times table
 *
 */
void print_times_table(int n)
{
	int num, times, res;

	if (n <= 15 || n >= 0)
	{

		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (times = 1; times <= n; times++)
			{
				_putchar(',');
				_putchar(' ');

				res = num * times;

				if (res <= n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((res / 10) + '0');
				}

				_putchar((res % 10) + '0');
			}

			_putchar('\n');
		}
	}
}

