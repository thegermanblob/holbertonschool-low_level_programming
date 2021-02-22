#include "holberton.h"
/**
 *
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i1, i2, rcount;

	i1 = 0;
	i2 = 0;
	rcount = 0;
	while (s[i1] != '\0')
	{
		while (accept[i2] != '\0')
		{
			if (accept[i2] == s[i1])
				rcount++;
			i2++;
		}
		if (s[i1] == ',')
			break;
		i1++;
		i2 = 0;
	}
	return (rcount);
}
