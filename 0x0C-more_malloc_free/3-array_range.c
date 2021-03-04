#include <stdlib.h>
/**
 * array_range - make array from min to max
 * @min: smallest num
 * @max:come on rlly
 * Return: array
 *
 */
int *array_range(int min, int max)
{
	int i, mini;
	int *s;

	mini = min;
	if (min > max)
		return (NULL);
	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		s[i] = mini;
		mini++;
	}
	return (s);
}

