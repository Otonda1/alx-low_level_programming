#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes struct dog
 * struct dog - the struct in question
 * @d: pointer to the struct
 * @name: doggo's name
 * @age: doggo's age
 * @owner: dog's human
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
