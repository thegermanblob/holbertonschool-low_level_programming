#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates array
 * @array: array
 * @size: size of array
 * @action: function to preform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (; i < size; i++)
	{
		action(array[i]);
	}
}
