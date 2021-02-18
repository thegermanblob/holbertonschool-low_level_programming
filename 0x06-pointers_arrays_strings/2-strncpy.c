#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - concanates a string up to n
 * @dest: destination
 * @src: source
 * @n: number of elements
 * Return: concanated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, scount, si;

	i = _strlen(src);
	si = i + 1;
	scount = 0;
	while ((scount < n) && (scount <= i))
	{
		
		dest[scount] = src[scount];
		scount++;
	}
	while ((dest[si] != '\0') && (si < n))
	{
		dest[si] = '\0';
		si++;
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
