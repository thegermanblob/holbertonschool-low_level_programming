#include <stdlib.h>
/**
 * _calloc - malloc but puts 0 in the mem block
 * @nmemb: length for mem block
 * @size: size of var to store
 * Return: pointer to mem block
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		s[i] = 0;
	}
	return ((void *)s);
}

