#include "holberton.h"
int num_find(char *s, int *end, int *begin);
int power(int base, int exp);
/**
 *
 *
 *
 *
 */
int _atoi(char *s)
{
	int result, end, begin, d, cn2, n, rr, sigh, p;
	

	result = 0;
	sigh = 1;
	begin = 0;
	p = num_find(s, &end, &begin);
	d = end - begin;
	cn2 = begin;
	if (p != 0)
	{
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
	else
		return (0);
}
/**
 *
 *
 *
 *
 *
 */
int num_find(char *s, int *end, int *begin)
{
	int count, p;

	count = 0;
	p = 0;
	while (s[count] != '\0')
	{
		if ((((s[count] >= '0') && (s[count] <= '9')) &&
			((s[count + 1] >= '0') && (s[count + 1] <= '9'))) && (*begin == 0))
		{
			*begin = count - 1;
			p++;

		}
		else if (((s[count] >= '0') && (s[count] <= '9')) &&
			((s[count + 1] < '0') || (s[count + 1] > '9') || (s[count + 1] == '\0')))
		{
			*end = count;
			p++;
			break;
		}
		count++;
	}
	return(p);
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

