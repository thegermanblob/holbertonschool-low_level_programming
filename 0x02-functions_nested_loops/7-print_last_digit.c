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
	if (n < 0)
		n = n * (-1);
	n = n % 10;
	_putchar (n + '0');
	return (n);
}
