/**
 * times_table - prints the 9 times table starting with 0
 * row column result
 * Return: times table
 * add extra space past single digit
 */

#include "main.h"

void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
			result = (row * column);
			if ((result / 10) > 0)
			{
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((result % 10) + '0');
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
