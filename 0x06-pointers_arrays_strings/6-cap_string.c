#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - captions string
 * @s: string to be
 * Return: returns string
 *
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		switch (s[i])
		{
			case '\t':
			case 44:
			case '.':
			case '}':
			case 33:
			case 63:
			case 34:
			case 40:
			case 41:
			case 123:
			case 32:
			case 59:
			case 10:
				if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
					s[i + 1] = s[i + 1] - 32;
				break;
			default:
				break;
		}
		i++;
	}
	return (s);
}
