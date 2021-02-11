#include "holberton.h"
/**
 * _isupper - checks if uppercase
 * @n: char to be checked
 * Return: void
 */
int _isupper(int n)
{
	if ((n >= 65) && (n <= 90))
		return (1);
	else
		return (0);
}
