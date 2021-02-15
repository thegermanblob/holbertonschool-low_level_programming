#include "holberton.h"
/**
 * rev_string - reverses strings
 * @s: string to be reversed
 *
 *
 */
void rev_string(char *s)
{
	int i, count;
	char c; /* c is used to store null value of array*/
	char storage[2000];

	i = 0;
	c = 'a';
	while (c != '\0') /*makes i the size of arry minus null*/
	{
		c = s[i];
		if (c != '\0')
			i++;
	}
	count = i - 1;
	for (i = 0; count >= 0; count--) /*flips s to storage*/
	{
		storage[i] = s[count];
		i++;
		if (count == 0)
			storage[i] = '\0';
	}
	count = i - 1;
	for (i = 0; count >= 0; count--) /* cp storage to s*/
	{
		*(s + count) = storage[count];
		i++;
		if (count == 0)
			s[i] = '\0';
	}

}
