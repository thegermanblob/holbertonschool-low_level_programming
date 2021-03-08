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
	int i, count;

	i = slen(src);
	for (count = 0; count <= i; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = src[count];
	return (dest);
}




/**
 * new_dog - makes a new dog struct
 * @name1: name fore dog
 * @age: dog age
 * @owner1: name for owner
 * Return: pointer to new dog on succ Null on fail
 */
dog_t *new_dog(char *name1, float age, char *owner1)
{
	dog_t *dogo = malloc(sizeof(dog_t));
	char *name, *owner;

	name = malloc(slen(name1) * sizeof(char));
	if (name == NULL)
		return (NULL);
	name = scpy(name, name1);

	owner = malloc(slen(owner1) * sizeof(char));
	if (owner == NULL)
		return (NULL);
	owner = scpy(owner, owner1);
	if (dogo == NULL)
		return (NULL);

	dogo->name = name;
	dogo->age = age;
	dogo->owner = owner;

	return (dogo);
}
