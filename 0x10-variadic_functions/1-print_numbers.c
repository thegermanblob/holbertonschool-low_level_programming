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
		if ((i != n - 1) && (s == NULL))
			printf("%i", va_arg(fargs, int));
		else if (i != n - 1)
			printf("%i%s", va_arg(fargs, int), s);
		else
			printf("%i\n", va_arg(fargs, int));
	}
	va_end(fargs);
}

