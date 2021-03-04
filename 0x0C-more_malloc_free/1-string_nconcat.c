#include <stdlib.h>
#include "holberton.h"

/**
 * len - messures string length
 * @s: string to be messured
 * Return: length of string
 */
unsigned int len(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}


/**
 * string_nconcat - joins 2 strings up to n char of s2
 * @s1: string to be coppied completly
 * @s2: string to be concanated by n chars
 * @n: number of chars to match
 * Return: pointer to string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, i2;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= len(s2))
		str = malloc((len(s1) + len(s2) + 1) * sizeof(char));
	else
		str = malloc((len(s1) + n + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	i2 = 0;
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		while ((s2[i2] != '\0') && (i2 < n))
		{
			str[i] = s2[i2];
			i++;
			i2++;
		}
	str[i] = '\0';
	return (str);
}
