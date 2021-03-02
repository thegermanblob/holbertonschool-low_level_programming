#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - messures string
 * @str: string to messure
 * Return: length
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	return (i);
}
/**
 * _strncat - concanates a string up to n
 * @dest: destination
 * @src: source
 * @n: number of elements
 * Return: concanated string
 */
char *str_concat(char *s1, char *s2)
{
	int n, i, i2;
	char *cp;

	n =  _strlen(s1) + _strlen(s2);
	cp = malloc(n * sizeof(char));
	if (cp == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		cp[i] = s1[i];
	}
	for (i2 = 0; s2[i2] != '\0'; i++)
	{
		cp[i] = s2[i2];
		i2++;
	}

	cp[i] = '\0';
	return (cp);
}
