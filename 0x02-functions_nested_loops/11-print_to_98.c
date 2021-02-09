#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints to number 98
 * @n: starting num
 *
 */
void print_to_98(int n)
{
	int c;

	c = n;
	if (c > 98)
	{
		for (; c > 97; c--)
		{
			printf("%i", c);
			if (c != 98)
				printf(", ");
			if (c == 98)
				printf("\n");
		}
	}
	else if (c < 98)
	{
		for (; c < 99; c++)
		{
			printf("%i", c);
			if (c != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else
		printf("%i\n", n);
}

