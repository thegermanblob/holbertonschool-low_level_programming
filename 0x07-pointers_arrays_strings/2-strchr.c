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
	int i = 0;
	char *llo = 0;

	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			llo = &s[i];
			break;
		}
		i++;
	}
	if (llo != 0)
		return (llo);
	else
		return (0);
}
