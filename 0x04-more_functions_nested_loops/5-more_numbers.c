#include "holberton.h"
/**
 * more_numbers - prints to 14
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int i, n, c, c2;

	for (i = 0; i < 10; i++)
	{
		c = 48;
		c2 = 48;
		for (n = 0; n < 15; n++)
		{
			if (n == 10)
				c = 49;
			_putchar(c);
			if (n >= 10)
			{
				_putchar(c2);
				c2++;
			}
			if (n < 9)
				c++;
		}
		_putchar('\n');
	}
}
