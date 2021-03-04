#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - re allocates mem
 * @ptr: pointer
 * @old_size: old size of mem block pointed at
 * @new_size: size for new block
 * Return: Null on used as free ptr if old_size == new_size ptr on succ
 *
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);

	if(new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
