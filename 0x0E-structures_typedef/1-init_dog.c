#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - intializes a var of tpe dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * @d: pointer to type dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
