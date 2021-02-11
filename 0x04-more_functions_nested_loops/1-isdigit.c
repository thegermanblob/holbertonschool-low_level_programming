#include "holberton.h"

/**
 * _isdigit - checks if digit
 * @c: character to be checked
 *
 * Return: 1 is digit || 0 not digit
 *
 *
 *
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
