#include <stdio.h>
/**
 * main - chacks prime factors
 * Return: always 0
 *
 */

int main(void)
{
	long int big = 612852475143;
	long int f, pf;

	for (f = 2; f <= big; f++)
	{
		while (big % f == 0)
		{
			big = big / f;
			if (f < pf)
				pf = f
		}
	}
	printf("\n");
	return (0);
}
