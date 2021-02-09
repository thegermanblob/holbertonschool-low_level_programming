#include "holberton.h"
/**
 * _abs - returns absolute value of n
 * @n: number to be tested
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
		return (n);
}
