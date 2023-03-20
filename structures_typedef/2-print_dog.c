#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the elelments of dog
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s", d->name);
		else
			printf("Name: (nil)");

		printf("Age: %f", d->age);

		if (d->owner != NULL)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)");
	}
}
