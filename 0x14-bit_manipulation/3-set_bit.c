#include "holberton.h"
/**
 * set_bit - set the bit
 * @n: number to change
 * @index: bit to return
 * Return: returns 1 on succ -1 on fail
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= 64)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
