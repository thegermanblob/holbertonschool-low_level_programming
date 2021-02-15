#include "holberton.h"

/**
 * _puts - prints string plus new line
 * @s: string to be printed
 *
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;
	char c = 'a';

	while (c != '\0')
	{
		c = s[i];
		if (c != '\0')
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
