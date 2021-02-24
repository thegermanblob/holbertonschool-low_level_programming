#include "holberton.h"
int palcheck(char *c, int len, int r);
/**
 * is_palindrome - calls funcions to check length then check if palindorme
 * @s:string
 * Return:1 if palindorme 0 if not
 *
 *
 */
int is_palindrome(char *s)
{
	int l, r;

	l =  _strlen_recursion(s) - 1;
	r = 1;
	r = palcheck(s, l, r);
	if (r != 0)
		return (1);
	return (0);
}

/**
 * palcheck - check if palindorme
 * @c:string
 * @len: length of string
 * @r: result
 * Return:1 if palindorme 0 if not
 */
int palcheck(char *c, int len, int r)
{
	if ((*c == *(c + len)) && r == 1)
	{
		r = palcheck(c + 1, len - 1, r);
		return (1);
	}
	else
		return (0);
	return (0);
}
/**
 * _strlen_recursion - messurse string
 * @s:string to messure
 * Return:length
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	return (len);
}
