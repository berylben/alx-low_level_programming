/**
 * print_line - draws a straight line ina terminal
 * @n: number of times _ should be printed
 * Return: o always
 */

#include "main.h"

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
