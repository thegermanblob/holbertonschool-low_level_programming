#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 *
 *
 */
const char *_strchr(const char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
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
	char c;

	va_start(fargs, format);
	while (*(format + i) != '\0' && (format))
	{
		switch (*(format + i))
		{
			case 'c':

				c = va_arg(fargs, int);
				printf("%c", c);

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
		if ((*(format + i + 1) != '\0') && (_strchr((format + i + 1),'c') ||
				_strchr((format + i + 1), 'c') || _strchr((format + i + 1),'f')
				|| _strchr((format + i+1),'s')))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(fargs);
}
