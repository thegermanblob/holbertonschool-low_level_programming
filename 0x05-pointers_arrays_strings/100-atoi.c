#include "holberton.h"
void num_find(char *s, int *end, int *begin);
int power(int base, int exp);
/**
 *
 *
 *
 *
 */
int _atoi(char *s)
{
	int result, end, begin, d, cn2, n, rr, sigh;
	

	result = 0;
	begin = 0;
	sigh = 1;
	num_find(s, &end, &begin);
	d = end - begin;
	cn2 = begin;
	
	while (cn2 <= end)
	{
		if (s[cn2] == '-')
		{
			sigh = sigh * (-1);
		}
		else if ((s[cn2] >= '0') && (s[cn2] <= '9'))
		{
			n = (s[cn2] - '0');
			result = result + (power(10,d) * n);
		}
		cn2++;
		d--;
	}
	rr = (sigh * result);
	return (rr);
}
/**
 *
 *
 *
 *
 *
 */
void num_find(char *s, int *end, int *begin)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		if (((s[count] >= '0') && (s[count] <= '9')) &&
			((s[count + 1] >= '0') && (s[count + 1] >= '9')))
		{
			*begin = count;
		}
		if (((s[count] >= '0') && (s[count] <= '9')) &&
			((s[count + 1] < '0') || (s[count + 1] > '9') || (s[count + 1] == '\0')))
		{
			*end = count;
			break;
		}
		count++;
	}
}

int power(int base, int exp) 
{
	if (exp == 0)
		return 1;
    else if (exp % 2)
		return base * power(base, exp - 1);
    else
	{
		int temp = power(base, exp / 2);
		return temp * temp;
	}
}

