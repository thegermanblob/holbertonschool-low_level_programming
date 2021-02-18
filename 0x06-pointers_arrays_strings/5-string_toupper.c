#include "holberton.h"
/**
 * string_toupper - changes characters to upper
 * @s: string
 * Return: returns string
 */
char *string_toupper(char *s)
{
	int i;
	char c;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			c = s[i];
			s[i] = c - 32;
		}
		i++;
	}
	return (s);
}
