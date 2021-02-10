#include <stdio.h>
/**
 * main - print fibonacci
 *
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long x_f1 = 0, y_f1 = 1, x_f2 = 0, y_f2 = 2;
	unsigned long x_next = 0, y_next = 0;
	unsigned long scale = 1000000000;
	int n = 3;

	printf("1, 2, ");
	while (n <= 98)
	{
		x_next = (y_f1 + y_f2) / scale;
		x_next += (x_f1 + x_f2);
		y_next = (y_f1 + y_f2) % scale;

		x_f1 = x_f2;
		y_f1 = y_f2;


		x_f2 = x_next;
		y_f2 = y_next;
		if (x_next > 0)
		{
			printf("%lu", x_next);
			printf("%09lu", y_next);
		}
		else
			printf("%lu", y_next);
		if (n < 98)
			printf(", ");
		n++;
	}
	printf("\n");
	return (0);
}
