#include "holberton.h"
/**
 * print_number - prints numbers
 * @n: number to print
 *
 *
 */
void print_number(int n)
{
	int ni;

	if (n < 0)
	{
		_putchar('-');
		ni = -n;
	}
	if (ni / 10 != 0)
		print_number(ni / 10);
	_putchar(ni % 10 + '0');
}
