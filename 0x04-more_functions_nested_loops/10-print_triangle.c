#include "holberton.h"

/**
 * print_diagonal - prints lines
 * @n: times to print
 *
 * Return: void
 */

void print_triangle(int s)
{
	int x, y;

	if (s >= 0)
	{
		for (y = 0; y < s; y++)
		{
			for (x = 0; x < (s - y); x++)
			{
				_putchar(' ');
			}
			for ( ; x <= s; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

