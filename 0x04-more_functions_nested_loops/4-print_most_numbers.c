#include "holberton.h"

/**
 * print_most_numbers- prints 0 to 9 skips 2 & 4
 * Return: n/a
 *
 */
int print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n != 2) && (n != 4))
			_putchar(n);
	}
	_putchar('\n');
	return (0);
}
