#include <stdio.h>

/**
 * main- prints out 1 to 100 execpt multiples of 35
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz ");
		else if (i == 100)
			printf("Buzz");
		else if ((i % 5 == 0) && (i % 3 != 0))
			printf("Buzz ");
		else if ((i % 5 == 0) && (i % 3 == 0))
			printf("FizzBuzz ");
		else
			printf("%i ", i);
	}
	putchar('\n');
	return (0);


}
