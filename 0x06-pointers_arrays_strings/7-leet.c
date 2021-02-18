#include "holberton.h"
/**
 * leet - translates to leet
 * @s: string to translate
 * Return: translated string
 *
 */
char *leet(char *s)
{
	char array[][3] = {
		"aA4",
		"eE3",
		"oO0",
		"tT7",
		"lL1",
	};
	int line, col, i;

	col = 0;
	i = 0;

	for (line = 0; line <= 4; line++)
	{
		while (s[i] != '\0')
		{
			if ((s[i] == array[line][col]) || (s[i] == array[line][col + 1]))
			{
				s[i] = array[line][col + 2];
			}
			i++;
		}
	}
	return (s);
}

