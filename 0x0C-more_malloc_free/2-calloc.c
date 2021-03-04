#include <stdlib.h>
/**
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *s;

	s = malloc(nmemb * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		s[i] = 0;
	}
	return ((void *)s);
}

