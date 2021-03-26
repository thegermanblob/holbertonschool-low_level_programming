#include "holberton.h"

/**
 * binary_to_uint - turns string binary into base 10 int
 * @b: string with binary
 * Return: result or 0 on fail
 */
unsigned int binary_to_uint(const char *b)
{
	int i, bit, r, base = 0;

	i = 0;
	bit = 0;
	r = 0;
	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		i++;
	}
	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
			bit = 1;
		else
			bit = 0;
		r += bit << base;
		i--;
		base++;
	}
	return (r);
}

