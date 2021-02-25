#include "holberton.h"
/**
 * is_prime_number - sqr root finder
 * @n: number
 * @c: ne
 * Return: sqr root
 *
 */
int faccheck(int n, int c);
int is_prime_number(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n > 0)
		return (faccheck(n, 1));
	return (0);
}
/**
 * faccheck - checks root
 * @n:number
 * @c:root to try
 * Return:root
 */

int faccheck(int n, int c)
{
	if (n % c == 0 && c != (n / 2))
		return (0);
	if (c >= (c / 2))
		return (1);
	return (faccheck(n, c + 1));
}

