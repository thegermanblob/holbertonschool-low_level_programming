#include "holberton.h"
/**
 * flip_bits - flips bits
 * @n: num1
 * @m: num to flip
 * Return: flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	i = 0;

	n = n ^ m;
	while (n > 0)
	{
		if (n & 1)
			i++;
		n = n >> 1;
	}
	return (i);
}
