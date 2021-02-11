#include "holberton.h"

/**
 * print_diagonal - prints lines
 * @n: times to print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	i = 0;
	if (i >= n)
		_putchar('\n');
	while (i < n)
	{
		if (i > 0)
			print_space(i);
		_putchar(92);
		_putchar('\n');
		i++;
	}
}


/**
*print_space - prints spaces
*@i: number of spaces
*Return: void
*/
void print_space(int i)
{
	int x;

	for (x = 0; x < i; x++)
	{
		_putchar(' ');
	}
}
