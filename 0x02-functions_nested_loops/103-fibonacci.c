#include <stdio.h>
/**
 * main - print fibonacci
 *
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int x, y, r;
	float rr;

	x = 0;
	y = 1;
	while (1)
	{
		r = x + y;
		x = y;
		y = r;
		if (r > 4000000)
			break;
		if ((r % 2) == 0)
			rr = rr + r;
	}
	printf("%.0f\n", rr);
	return (0);
}
