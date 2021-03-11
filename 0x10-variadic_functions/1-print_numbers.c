#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints given nums seperated by given string
 * @s: string to be used as seperate
 * @n:number of arguments to be passed
 *
 */
void print_numbers(const char *s, const unsigned int n, ...)
{
	unsigned int i;
	va_list fargs;

	va_start(fargs, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(fargs, int));
		if ((i != n - 1) && (s != NULL))
			printf("%s", s);
	}
	printf("\n");
	va_end(fargs);
}

