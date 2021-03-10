#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - runs the given function through an array
 * @array: array to be given
 * @size: size of array
 * @cmp: functin to be run
 * Return: index of array -1 on fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	r = 0;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		r = cmp(array[i]);
		if (r != 0)
			return (i);
	}
	return (-1);
}
