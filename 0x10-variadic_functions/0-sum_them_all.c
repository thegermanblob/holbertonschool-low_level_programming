#include "variadic_functions.h"
/**
 * sum_them_all - sum given nums
 * @n: number of nums to sum
 * Return: gives result
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int r, result;
	unsigned int i;
	va_list fargs;

	va_start(fargs, n);
	for (i = 0; i < n; i++)
	{
		r = va_arg(fargs, int);
		result += r;
	}
	va_end(fargs);

	return (result);
}
