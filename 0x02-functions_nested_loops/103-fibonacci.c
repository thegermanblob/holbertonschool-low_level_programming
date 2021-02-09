#include <stdio.h>
/**
 * main - print fibonacci
 *
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, x, y, r, rr;

	x = 0;
	y = 1;
	for (i = 0; i < 33; i++)
	{
		r = x + y;
		x = y;
		y = r;
		if ( r > 4000000)
			break;
		if ((r % 2) == 0)
			rr = rr + r;
	}
	printf("%lu\n", rr);
	return (0);
}
