#include "holberton.h"

/**
 * print_binary - print the given number in binary
 * @n: num to be converted
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
