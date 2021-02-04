#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Takes random num and
 *        determines if positive
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%i ", n);
	if (n < 0)
	{
	puts("is negative");
	}
	else if (n == 0)
	{
	puts("is zero");
	}
	else if (n > 0)
	{
	puts("is positive");
	}
	return (0);
}
