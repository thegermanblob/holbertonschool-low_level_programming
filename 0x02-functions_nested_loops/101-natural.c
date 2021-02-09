#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int r, i;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || (i % 5))
			r = r + i;
	}
	printf("%i\n", r);
	return (0);
}
