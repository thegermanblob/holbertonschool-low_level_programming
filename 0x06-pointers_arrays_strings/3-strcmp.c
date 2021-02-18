#include "holberton.h"
/**
 * _strcmp - compares
 * @s1: string 1
 * @s2: string 2
 * Return: diference in ascii val
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i, r;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	r = s1[i] - s2[i];
	return (r);
}
