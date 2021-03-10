#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 *
 *
 *
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
