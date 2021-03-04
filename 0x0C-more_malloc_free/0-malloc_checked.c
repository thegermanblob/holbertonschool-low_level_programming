#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - does malloc and checks
 * @b:size for malloc
 * Return: pointer on 1 returns 98 on exit
 *
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
