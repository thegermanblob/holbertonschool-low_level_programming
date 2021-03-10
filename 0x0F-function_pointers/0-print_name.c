#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name given through given func
 * @name: name to print
 * @f: function to print with
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
