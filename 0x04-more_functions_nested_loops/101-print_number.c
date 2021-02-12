#include "holberton.h"
/**
 *
 *
 *
 *
 */
void print_number(int n)
{
	if (n < 0)
		n = -n;
	if (ni / 10 != 0)
		print_number(ni / 10);
	_putchar(ni % 10 + '0');
}
