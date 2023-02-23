/**
 * print_last_digit - digit of a number
 * @n: integer input
 * Return: the last digit of a number
 */

#include "main.h"

int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = -1 * (n % 10);
	else
		r = n % 10;
	_putchar((r % 10) + '0');
	return (n % 10);
}
