#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - is a calculator
 * @argc: num of args passed
 * @argv:args passed
 * Return: 0 on succ
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	char *s;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2];
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == '/' && n2 == 0) || (*s == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(s)(n1, n2));
	return (0);
}
