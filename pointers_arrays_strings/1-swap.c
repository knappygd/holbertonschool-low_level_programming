#include "main.h"
/**
 * swap_int - swap values of a and b
 * @a: int 1
 * @b: int 2
 */
void swap_int(int *a, int *b)
{
	int *auxa, *auxb;
	*auxa = 0;
	*auxb = 0;

	*auxa = *a;
	*auxb = *b;
	*a = *auxb;
	*b = *auxa;
}
