#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - defines dog qualities
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 *
 * Description: Let's find out more about this
 *		dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* main.h */
