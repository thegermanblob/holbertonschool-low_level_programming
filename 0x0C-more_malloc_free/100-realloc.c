#include "holberton.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	UNUSED(old_size);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
