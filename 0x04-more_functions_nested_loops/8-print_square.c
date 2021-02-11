#include "holberton.h"

/**
 * print_square - prints a square
 * @s: size of square
 *
 *
 */

void print_square(int s)
{
	int x, y;
	if (s > 0)
	{
		for (y = 0; y < s; y++)
		{
			for (x = 0; x < s; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
