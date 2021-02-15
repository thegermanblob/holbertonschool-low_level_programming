#include "holberton.h"

/**
 *
 *
 *
 *
 */
void print_rev(char *s)
{
	int i, count;
	char c;

	i = 0;
	c = 'a';
	while (c != '\0')
	{
		c = s[i];
		if (c != '\0')
			i++;
	}
	for (count = i - 1; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
