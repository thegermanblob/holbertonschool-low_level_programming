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

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
}
