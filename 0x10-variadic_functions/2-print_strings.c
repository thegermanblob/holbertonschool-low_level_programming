#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints given nums seperated by given string
 * @s: string to be used as seperate
 * @n:number of arguments to be passed
 *
 */
void print_strings(const char *s, const unsigned int n, ...)
{
	unsigned int i;
	va_list fargs;

	va_start(fargs, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(fargs, char *) != NULL)
			printf("%s", va_arg(fargs, char *));
		else
			printf("(nil)");
		if ((i != n - 1) && (s != NULL))
			printf("%s", s);
	}
	printf("\n");
	va_end(fargs);
}

