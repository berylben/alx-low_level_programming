/**
 * print_sign - prints the sign of a number
 * @n: single number input
 * Return: 1 and + if n > 0, o if n == 0, -1 and - n < 0
 */

#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
