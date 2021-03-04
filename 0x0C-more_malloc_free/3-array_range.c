#include <stdlib.h>
/**
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int i, mini;
	int *s;

	mini = min;
	if (min > max)
		return (NULL);
	s = malloc((max - min) * sizeof(int));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		s[i] = mini;
		mini++;
	}
	return (s);
}

