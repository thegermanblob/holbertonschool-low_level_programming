#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int c;
	int ci; /*count decimas*/

	c = 48;
	for (ci = 48; (ci < 58); ci++)
	{
	for (c = 48; c < 58; c++)
	{
	putchar(ci);
	putchar(c);
	if ((ci != 57) || (c != 57))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
