#include "holberton.h"
/**
 * print_sign - Takes num and
 *  determines if positive or neg or zero
 * @n: is the number given by main
 *
 * Return: 1 is positive, -1 if neg , 0 if zero
 */
int print_sign(int n)
{

	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('+');
	return (1);
	}
}
