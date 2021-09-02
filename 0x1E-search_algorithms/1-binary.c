#include "search_algos.h"
/**
 * binary_search - searches for a value using binary_search
 * @array: array to bea searched through
 * @size: length of array
 * @value: value we're looking for
 * Return: index where val is found or -1 if failed
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d ", array[i]);
		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
