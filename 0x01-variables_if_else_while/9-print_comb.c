#include <stdio.h>
/**
 *
 *
 *
 *
 */
int main(void)
{
	int i;
	int c[11];

	for (i = 0; i < 10; i++)
	{
	c[i] = 48 + i;
	putchar(c[i]);
	if( i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
