#include "holberton.h"

/**
 * print_line - prints a line n spaces long
 * @n: is how long the line should be
 *
 * Return: void
 *
 *
 */
void print_line(int n)
{
	int i;

	if(n == 0)
		_putchar('\n');
	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
