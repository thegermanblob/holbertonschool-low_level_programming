#include "holberton.h"
/**
 * _strpbrk - gets length of a prefix substring
 * @s: string to check
 * @accept: substring
 * Return: count
 *
 */
char  *_strstr(char *haystack, char *needle)
{
	int i1, i2;

	i1 = 0;
	i2 = 0;
	while (haystack[i1] != '\0')
	{
		while (needle[i2] != '\0')
		{
			if (needle[0] == haystack[i1])
				return (haystack + i1);
			i2++;
		}
		i1++;
		i2 = 0;
	}
	return ('\0');
}
