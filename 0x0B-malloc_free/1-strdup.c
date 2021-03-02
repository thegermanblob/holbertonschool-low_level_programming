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
	int n, i;
	char *cp;

	n = _strlen(og);

	if (n == 0)
		return (NULL);
	cp = malloc((n + 1) * sizeof(char));
	if (cp == NULL)
		return (NULL);
	i = 0;
	while (og[i] != '\0')
	{
		cp[i] = og[i];
		i++;
	}
	return (cp);
}
