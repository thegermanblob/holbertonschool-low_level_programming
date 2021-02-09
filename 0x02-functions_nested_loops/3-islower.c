#include "holberton.h"
/**
 * _islower returns 1 if it is a lower case letter
 *
 * int c is the numeric value of char to be tested
 *
 * Return: 1 is a lower case
 */
int _islower(int c)
{
	if ((c <= 122) && (c >= 97))
	{
		return (1);
	}
	else
		return (0);
}
