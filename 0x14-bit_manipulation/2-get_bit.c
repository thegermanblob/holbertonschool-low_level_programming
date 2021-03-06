#include "holberton.h"
/**
 * get_bit - get the bit
 * @n: number to change
 * @index: bit to return
 * Return: returns the bit
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index >= 64)
		return (-1);

	b = n >> index;

	return (b & 1);
}
