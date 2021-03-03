#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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
 * str_concat - concanates a string up to n
 * @s1: string 2
 * @s2: string 1
 * Return: concanated string
 */
char *argstostr(int ac, char **av)
{
	int i,n,j,x;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		n += _strlen(av[i]);
	}
	n++;
	a = malloc(n * sizeof(char));
	if(a == NULL)
		return (NULL);
	x = 0;

	for(i = 1; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			a[x] = av[i][j];
			if(j == _strlen(av[i]) - 1)
				a[x] = '\n';
			x++;
		}
	}
	a[x] = '\0';
	return (a);
}
