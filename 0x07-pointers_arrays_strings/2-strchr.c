#include "holberton.h"
/**
 * _strchr - searches string for given character
 * @s: string given
 * @c: character given
 * Return: returns pointer to character in string, or null
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
		return ('\0');
}

