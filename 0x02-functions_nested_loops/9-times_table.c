#include "holberton.h"
/**
 * times_table - print muliplication tables 0 - 9
 *
 *
 */
void times_table(void)
{
	int num1, num2;
	int result, result2;
	int rd1, rd2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			result = num1 * num2;
			result2 = num1 * (num2 + 1);
			rd1 = result / 10;
			rd2 = result % 10;
			if (result < 10)
				_putchar(result + '0');
			if (((rd1 != 0) || (num1 == 0) || (num2 == 0)) && (result >= 10))
				_putchar(rd1 + '0');
			if (((rd2 == 0) && (rd1 != 0)) || ((rd2 != 0) && (rd1 != 0)))
				_putchar(rd2 + '0');
			if (num2 != 9)
			{
			_putchar(',');
			_putchar(' ');
			if (result2 < 10)
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
