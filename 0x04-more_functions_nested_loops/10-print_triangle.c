#include "holberton.h"

/**
 * print_triangle - prints lines
 * @s: times to print
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
			for (x = 1 ; x < (s - y); x++)
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

