#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: bytes
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	return (m);
}
