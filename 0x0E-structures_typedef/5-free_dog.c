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
	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->owner = owner;
	d->age = age;
	free(d);
}
