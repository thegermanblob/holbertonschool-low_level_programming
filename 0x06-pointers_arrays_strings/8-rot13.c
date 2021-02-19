#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - translates to rot13
 * @s: string to translate
 * Return: translated string
 *
 */
char *rot13(char *s)
{
	int i, j;
	char az[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char nm[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != 0)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == az[j])
			{
				s[i] = nm[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
