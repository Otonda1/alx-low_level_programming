#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - defines a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *ptr;

	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	i = j = 0;
	while (name[i++])
		;
	while (owner[j++])
		;
	ptr->name = malloc(i * sizeof(ptr->name));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		ptr->name[k] = name[k];
	ptr->age = age;
	ptr->owner = malloc(j * sizeof(ptr->owner));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		ptr->owner[k] = owner[k];
	return (ptr);
}
