#include "holberton.h"
/**
 * swap_int - swaps a for b
 * @a: num to be swaped
 *
 * @b: num to be swaped
 *
 *
 */
void swap_int(int *a, int *b)
{
	int x, y;
	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
