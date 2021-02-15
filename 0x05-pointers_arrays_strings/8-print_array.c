#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints up to specified element of array
 * @a: array
 * @n: numeber of elements to print
 *
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%i", a[count]);
		if (count != n - 1)
			printf(", ");
	}
	printf("\n");
}
