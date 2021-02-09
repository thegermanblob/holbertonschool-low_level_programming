#include "holberton.h"
/**
 * _isalpha returns 1 if it is a letter
 * @c: is the numeric value of char to be tested
 *
 * Return: 1 is a lette
 */
int _isalpha(int c)
{
	if (((c <= 122) && (c >= 97)) || ((c <= 65) && (c >= 90) ))
	{
		return (1);
	}
	else
		return (0);
}
