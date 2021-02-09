#include "holberton.h"
/**
 * print_last_digit - prints last digit of n
 * @n: number
 *
 * Return: returns last digit of n
 *
 */
int print_last_digit(int n)
{
	long int x;

	x = n;
	if (x < 0)
		x = x * (-1);
	x = x % 10;
	_putchar (x + '0');
	return (x);
}
