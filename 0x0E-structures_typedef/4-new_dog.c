#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - makes a new dog struct
 * @name: name fore dog
 * @age: dog age
 * @owner: name for owner
 * Return: pointer to new dog on succ Null on fail
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo = malloc(sizeof(dog_t));

	if (dogo == NULL)
		return (NULL);

	dogo->name = name;
	dogo->age = age;
	dogo->owner = owner;

	return (dogo);
}
