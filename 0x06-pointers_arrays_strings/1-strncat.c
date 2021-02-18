#include "holberton.h"
/**
 * _strncat - concanates a string up to n
 * @dest: destination
 * @src: source
 * @n: number of elements
 * Return: concanated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, scount;

	scount = 0;
	i = _strlen(dest);

	while ((scount < n) && (src[scount] != '\0'))
	{
		dest[i] = src[scount];
		i++;
		scount++;
	}
	return (dest);
}
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
	return (i);
}
