#include "holberton.h"
/**
 * puts2 - prints every other letter
 * @str: string to be half printed
 *
 *
 */
void puts2(char *str)
{
	char c;
	int i;

	c = 'a';
	i = 0;
	while (c != '\0')
	{
		c = str[i];
		if ((i % 2 == 0) && (c != '\0'))
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
