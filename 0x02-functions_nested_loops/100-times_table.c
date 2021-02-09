#include "holberton.h"
/**
 * print_times_table - print muliplication tables 0 - 9
 * @n: number for table
 *
 */
void print_times_table(int n)
{
	int x, y, r;

	if (n >= 0 && n <= 15)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				r = y * x;
				if (x != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if ((r < 10) && (x != 0))
					_putchar(' ');
				if ((r < 100) && (x != 0))
					_putchar(' ');
				if ((r >= 100) && (r > 10))
				{
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
				}
				else if (r >= 10)
					_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
