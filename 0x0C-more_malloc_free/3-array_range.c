#include <stdlib.h>
/**
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
		return (NULL);
	s = malloc(max * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		s[i] = min;
		min++;
	}
	return ((void *)s);
}


