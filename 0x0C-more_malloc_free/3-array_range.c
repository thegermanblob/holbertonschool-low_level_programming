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
	s = malloc((max + 1) * sizeof(int));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}

