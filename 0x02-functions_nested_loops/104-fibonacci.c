#include <stdio.h>
/**
 * main - print fibonacci
 *
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long i, x, y, r;
	unsigned long x1, x2, y1, y2;
	unsigned long r1, r2;

	x = 0;
	y = 1;

	for (i = 0; i < 92; i++)
	{
		r = x + y;
		x = y;
		y = r;
		printf("%lu, ", r);
	}
	x1 = x / 10000000000;
	x2 = x % 10000000000;
	y1 = y / 10000000000;
	y2 = y / 10000000000;

	for (i = 93; i < 99; i++)
	{
		r1 = x1 + y1;
		r2 = x2 + y2;
		if (x2 + y2 > 9999999999)
		{
			r1 += 1;
			r2 %= 1000000000;
		}
		printf("%lu%lu", r1, r2);
		if (i != 98)
			printf(", ");
		x1 = y1;
		x2 = y2;
		y1 = r1;
		y2 = r2;
	}
	printf("\n");

	return (0);
}
