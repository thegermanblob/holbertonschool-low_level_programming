#include <stdio.h>
/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al[27];
	int i;

	for (i = 0; i < 26; i++)
	{
	al[i] = 'z' - i;
	putchar(al[i]);
	}
	putchar('\n');
	return (0);
}
