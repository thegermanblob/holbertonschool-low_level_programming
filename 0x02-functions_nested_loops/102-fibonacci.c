#include <stdio.h>
/**
 * main - print fibonacci
 *
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, x, y;

	x = 1;
	y = 2;
	for (i = 0; i <= 25; i++)
	{
		printf("%li, ", x);
		printf("%li", y);
		if (i != 25)
			printf(", ");
		else
			printf("\n");
		x = x + y;
		y = x + y;
	}
	return (0);
}
