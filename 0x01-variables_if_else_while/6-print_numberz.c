#include <stdio.h>
/**
 * main - prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n[10];
	int i;

	for (i = 0; i < 10; i++)
	{
	n[i] = 48 + i;
	putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
