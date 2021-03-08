#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * slen - string length
 * @str: string to check
 * Return: lenght
 */
int slen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * scpy - string copyy
 * @dest: destination to copy
 * @src: source
 * Return: pointer to string
 */
char *scpy(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ptr);
}




/**
 * new_dog - makes a new dog struct
 * @name1: name fore dog
 * @age: dog age
 * @owner1: name for owner
 * Return: pointer to new dog on succ Null on fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	dogo->name = malloc((1 + slen(name)) * sizeof(char));
	if (dogo->name == NULL)
	{
		free(dogo->name);
		return (NULL);
	}
	dogo->name = scpy(dogo->name, name);

	dogo->owner = malloc((slen(owner) + 1) * sizeof(char));
	if (dogo->owner == NULL)
		return (NULL);
	dogo->owner = scpy(dogo->owner, owner);
	if (dogo == NULL)
	{
		free(dogo->name);
		free(dogo->owner);
		return (NULL);
	}

	dogo->age = age;

	return (dogo);
}
