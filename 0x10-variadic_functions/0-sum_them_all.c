#include "variadic_functions.h"
/**
 * sum_them_all - sum given nums
 * @n: number of nums to sum
 * Return: gives result
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int i;
	va_list fargs;

	if (n == 0)
		return (0);
	va_start(fargs, n);
	result = 0;
	for (i = 0; i < n; i++)
	{
		result += va_arg(fargs, int);
	}
	va_end(fargs);

	return (result);
}
