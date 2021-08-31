#include <stdio.h>
/**
 * linear_search - searches given array for given value
 * @array: given array to search
 * @size: size of given array
 * @value: value to search for
 * Return: returns index of where the value is or -1 if not
 */
int linear_search(int *array, size_t size, int value)
{
	 unsigned int i = 0, found = 0;

	do {
		if (array[i] == value)
		{
			found = 1;
			break;
		}
		else
			i++;
	} while (i < size || found == 1);
	if (found == 0)
		return (-1);
	return (i);
}
