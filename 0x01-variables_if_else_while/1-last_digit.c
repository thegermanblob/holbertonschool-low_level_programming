#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int ld = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is %i", n, ld);
	if (ld > 5)
	{
	puts(" and is greater than 5");
	}
	else if (ld == 0)
	{
	puts(" and is zero");
	}
	else if ((ld < 6) && (ld != 0))
	{
	puts(" and is less than 6 and not 0");
	}
	return (0);
}
