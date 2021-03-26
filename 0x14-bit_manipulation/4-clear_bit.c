#include "holberton.h"
/**
 * clear_bit - clear the bit
 * @n: number to change
 * @index: bit to return
 * Return: returns 1 on succ -1 on fail
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
