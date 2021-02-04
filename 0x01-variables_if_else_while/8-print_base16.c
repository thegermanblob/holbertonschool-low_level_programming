#include <stdio.h>
/**
 * main -prints all the numbers of base 16 in
 * in lowercase, followed by a new line.
 *
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;
	char hx[11];
	char al[7];

	for (i = 0; i < 10; i++)
	{
	hx[i] = '0' + i;
	putchar(hx[i]);
	}

	for (i = 0 ; i < 6; i++)
	{
	al[i] = 'a' + i;
	putchar(al[i]);
	}
	putchar('\n');
	return (0);
}
