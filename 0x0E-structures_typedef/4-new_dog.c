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
 * @name: name fore dog
 * @age: dog age
 * @owner: name for owner
 * Return: pointer to new dog on succ Null on fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo = malloc(sizeof(dog_t));

	if (dogo == NULL)
	{
		free(dogo);
		return (NULL);
	}
	dogo->name = malloc((1 + slen(name)) * sizeof(char));
	if (dogo->name == NULL)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}

	dogo->owner = malloc((slen(owner) + 1) * sizeof(char));
	if (dogo->owner == NULL)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	dogo->owner = scpy(dogo->owner, owner);
	dogo->name = scpy(dogo->name, name);

	dogo->age = age;

	return (dogo);
}
