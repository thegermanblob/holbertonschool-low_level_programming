#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all
 * @format: lists argumants for char, int, float, char
 * Return: none
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list fargs;
	char *str, *coma = "";

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(fargs, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", coma, va_arg(fargs, int));
				break;
			case 'i':
				printf("%s%d", coma, va_arg(fargs, int));
				break;
			case 'f':
				printf("%s%f", coma, va_arg(fargs, double));
				break;
			case 's':
				str = va_arg(fargs, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", coma, str);
				break;
			default:
				i++;
				continue;
		}
		coma = ", ";
		i++;
	}
	printf("\n");
	va_end(fargs);
}
