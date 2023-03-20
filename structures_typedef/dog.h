#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog type struct
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}; dog

void init_dog(struct dog *d, char *name, float age, char *owner)void print_dog(struct dog *d);
void print_dog(struct dog *d);

#endif
