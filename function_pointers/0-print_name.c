#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print a name
 * @name: name to print
 * @f: function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
