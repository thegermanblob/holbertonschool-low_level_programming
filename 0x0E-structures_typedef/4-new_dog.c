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
	count++;
	dest[count] = src[count];
	return (dest);
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
	char *n, *o;

	n = malloc(slen(name) * sizeof(char));
	if (n == NULL)
		return (NULL);
	n = scpy(n, name);

	o = malloc(slen(owner) * sizeof(char));
	if (o == NULL)
		return (NULL);
	o = scpy(o, owner);
	if (dogo == NULL)
		return (NULL);

	dogo->name = name;
	dogo->age = age;
	dogo->owner = owner;

	return (dogo);
}
