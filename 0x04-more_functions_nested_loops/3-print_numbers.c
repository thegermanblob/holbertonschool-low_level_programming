#include "holberton.h"

/**
 * print_numbers- prints 0 to 9
 * Return: n/a
 *
 */
int print_numbers(void)
{
	int n;

	for (n = 48; n < 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
