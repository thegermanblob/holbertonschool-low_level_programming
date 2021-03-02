#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to new string duplicate
 * of string str
 * @str: string to duplicate
 * Return: On success, _strdup function returns pointer to duplicated
 * string, returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int len;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	dup = malloc((sizeof(char) * (len + 1)));
	if (dup == NULL)
		return (NULL);

	while (len >= 0)
	{
		dup[len] = str[len];
		len--;
	}
	return (dup);
}
