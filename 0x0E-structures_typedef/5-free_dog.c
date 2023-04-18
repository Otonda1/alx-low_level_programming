#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees created dog
 *
 * @d: pointer to the dog
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
		free(d);
	}
}
