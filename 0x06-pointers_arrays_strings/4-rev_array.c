#include "holberton.h"
/**
 * reverse_array - as the name says
 * @a: array to be reversed
 * @n: size of array
 *
 */
void reverse_array(int *a, int n)
{
	int i, count;
	int storage[500];

	count = 0;
	for (i = n - 1; i >= 0; i--)
	{
		storage[count] = a[i];
		count++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = storage[i];
	}
}
