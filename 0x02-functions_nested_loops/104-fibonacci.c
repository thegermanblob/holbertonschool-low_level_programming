#include <stdio.h>
/**
 * main - print fibonacci
 *
 *
 * Return: Always 0
 */
int main(void)
{
	float i, x, y, r;

	x = 1;
	y = 2;
	printf("1, 2, ");
	for (i = 0; i < 97; i++)
	{
		r = x + y;
		x = y;
		y = r;
		/*printf("%li, ", x);*/
		printf("%.0f", r);
		if (i == 96)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
