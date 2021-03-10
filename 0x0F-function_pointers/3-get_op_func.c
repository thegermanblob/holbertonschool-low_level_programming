#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - get func
 * @s: operator
 * Return: func to be used
 */
int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	 };
	int i = 0;

	if (s[0] != '+' && s[0] != '-' && s[0] != '*' && s[0] != '/' &&
			s[0] != '%')
		return (NULL);

	while (ops[i].op[0] != s[0])
		i++;
	return (ops[i].f);
}
