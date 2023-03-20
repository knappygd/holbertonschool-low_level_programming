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

		if (d->age != NULL)
			printf("Age: %s", d->age);
		else
			printf("Age: (nil)");

		if (d->owner != NULL)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)");
	}
}
