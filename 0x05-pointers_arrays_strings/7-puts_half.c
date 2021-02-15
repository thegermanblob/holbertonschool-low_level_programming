#include "holberton.h"
int stlenght(char *t);
/**
 * puts_half - prints half of the string given
 * @s: the string to be half print
 *
 */
void puts_half(char *s)
{
	int i, lh;

	i = stlenght(s);
	if (i % 2 == 0)
		lh = i / 2;
	else
		lh = (i + 1) / 2;
	while (s[lh] != '\0')
	{
		_putchar(s[lh]);
		lh++;
	}
	_putchar('\n');
}
/**
 * stlenght - messures the given string
 * @t: given string
 * Return: the length of string
 */
int stlenght(char *t)
{
	int ct;

	ct = 0;
	while (t[ct] != '\0')
	{
		ct++;
	}
	return (ct);
}

