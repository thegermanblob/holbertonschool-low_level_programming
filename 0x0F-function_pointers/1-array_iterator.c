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
	int i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
