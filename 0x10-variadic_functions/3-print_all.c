#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 *
 *
 */
void pchar(va_list fargs)
{
	char c;

	c = va_arg(fargs, int);
	printf("%c", c);
}
/**
 *
 *
 *
 */
void pint(va_list fargs)
{
	int n;

	n = va_arg(fargs, int);
	printf("%i",n);
}
/**
 *
 *
 */
void pflot(va_list fargs)
{
	float n;
	n = va_arg(fargs, double);
	printf("%f", n);
}
/**
 *
 *
 */
void pstr(va_list fargs)
{
	char *s;

	s = va_arg(fargs, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);
}

/**
 *
 *
 *
 */
void print_all(const char *const format, ...)
{
	unsigned int i;
	va_list fargs;

	va_start(fargs, format);
	while (*(format + i) != '\0' && (format))
	{
		switch (*(format + i))
		{
			case 'c':
				pchar(fargs);
				break;
			case 'i':
				pint(fargs);
				break;
			case 'f':
				pflot(fargs);
				break;
			case 's':
				pstr(fargs);
				break;
			default:
				i++;
				continue;

		}
		if ((*(format + i + 1) != '\0') && (strchr((format + i+1),'c') ||
				strchr((format + i +1), 'c') || strchr((format + i+1),'f')
				|| strchr((format + i+1),'s')))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(fargs);
}
