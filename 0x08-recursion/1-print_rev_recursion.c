#include "holberton.h"
/**
 * _puts_rev_recursion - prints string backwards
 * @s: string to print rev
 *
 *
 *
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
