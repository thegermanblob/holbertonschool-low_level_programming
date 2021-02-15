#include "holberton.h"
int stlength(char *t);
/**
 * _strcpy - copies given string and returns it
 * @dest: destination for copied string
 * @src: string to be copied
 * Return: copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i, count;

	i = stlength(src);
	for (count = 0; count <= i; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
/**
 * stlength - messures the given string
 * @t: given string
 * Return: the length of string
 */
int stlength(char *t)
{
	char c;
	int ct;

	c = 'a';
	ct = 0;
	while (c != '\0')
	{
		c = t[ct];
		if (c != '\0')
			ct++;
	}
	return (ct);
}
