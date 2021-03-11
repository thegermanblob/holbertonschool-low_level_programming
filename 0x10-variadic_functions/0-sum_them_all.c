#include "variadic_functions.h"
/**
 *
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int i;

	va_list fargs;
	va_start (fargs, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(fargs, int);
	}
	va_end (fargs);

	return (result);
}
