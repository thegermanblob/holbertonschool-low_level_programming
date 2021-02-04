#include <stdio.h>
/**
 * main - Outputs the alphabet 2 times one capitalized once not.
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al[27];
	int i;
	char cal[27];

	for (i = 0; i < 26; i++)
	{
	al[i] = 'a' + i;
	putchar(al[i]);
	}
	for (i = 0; i < 26; i++)
	{
	cal[i] = 'A' + i;
	putchar(cal[i]);
	}
	putchar('\n');
	return (0);
}
