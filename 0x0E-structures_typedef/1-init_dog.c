#include "dog.h"
#include <stdio.h>

/**
 * init_dog - init a dog struct
 * @d: struct to init
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
