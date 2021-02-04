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

	for (i = 0; i < 26; i++)
	{
	al[i] = 'a' + i;
	if ((al[i] != 'q') && (al[i] != 'e'))
	putchar(al[i]);
	}
	putchar('\n');
	return (0);
}
