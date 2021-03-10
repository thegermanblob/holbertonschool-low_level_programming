#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds
 * @a: num1
 * @b: num2
 * Return: result
 */
int op_add(int a, int b)
{
	int r;

	r = a + b;
	return (r);
}
/**
 * op_sub - ubstrac
 * @a:num1
 * @b: num2
 * Return: resutl
 */
int op_sub(int a, int b)
{
	int r;

	r = a - b;
	return (r);
}
/**
 * op_mul - mults
 * @a: num1
 * @b: num2
 * Return: result
 */
int op_mul(int a, int b)
{
	int r;

	r = a * b;
	return (r);
}
/**
 * op_div - divs
 * @a:num1
 * @b: num2
 * Return:result
 */
int op_div(int a, int b)
{
	int r;

	r = a / b;
	return (r);
}
/**
 * op_mod - modulus
 * @a:num1
 * @b: num2
 * Return:result
 */
int op_mod(int a, int b)
{
	int r;

	r = a % b;
	return (r);
}

