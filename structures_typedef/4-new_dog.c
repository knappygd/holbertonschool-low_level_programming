#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - a new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dow owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(name));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}

	dog->owner = malloc(sizeof(owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}

	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);

	return (dog);
}
