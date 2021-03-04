#include <stdlib.h>
#include "holberton.h"

/**
 *
 *
 *
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit (98);
	return (s);
}
