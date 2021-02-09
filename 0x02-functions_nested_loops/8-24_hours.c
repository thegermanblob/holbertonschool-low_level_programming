#include "holberton.h"
/**
 * jack_bauer - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 24; num1++)
	{
		if (num1 < 24)
		{
			for (num2 = 0; num2 <= 59; num2++)
			{
				_putchar((num1 / 10) + '0');
				_putchar((num1 % 10) + '0');
				_putchar(':');
				_putchar((num2 / 10) + '0');
				_putchar((num2 % 10) + '0');
				_putchar('\n');
			}
		}
	}

}
