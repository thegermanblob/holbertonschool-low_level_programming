#include <stdlib.h>
/**
 * create_array - makes array
 * @n: size of array
 * @c: char to use to fill
 * Return: array
 *
 *
 */
char *create_array(unsigned int n, char c)
{
	char *a;
	unsigned int i;

	a = malloc(n * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		a[i] = c;
	}
	return (a);
}
