#include <stdlib.h>
/**
 *
 *
 *
 */
void *array_rane(int min, int max)
{
	unsigned int i;
	int *s;

	s = malloc(max * sizeof(int));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		s[i] = i;
	}
	return (s);
}

