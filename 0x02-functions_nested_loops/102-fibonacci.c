#include <stdio.h>
/**
 * main - print fibonacci
 *
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, x, y, r;

	x = 0;
	y = 1;
	for (i = 0; i < 50; i++)
	{
		r = x + y;
		x = y;
		y = r;
		/*printf("%li, ", x);*/
		printf("%lu", r);
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
