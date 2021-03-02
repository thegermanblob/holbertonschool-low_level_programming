#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - 
 *
 *
 */
int _strlen(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * 
 *
 *
 *
 */
char *_strdup(char *og)
{
	int n;
	char *cp;

	n = 1 + _strlen(og);

	if (og == NULL)
	{
		return (NULL);
	}
	cp = malloc(n * sizeof(char));
	if (cp == NULL)
	{
		return (NULL);
	}
	while (n >= 0)
	{
		cp[n] = og[n];
		n--;
	}
	return (cp);
}
