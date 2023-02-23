/**
 * print_last_digit - digit of a number
 * @n: integer input
 * Return: the last digit of a number
 */

#include "main.h"

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (digit < 0)
		digit = n % 10;
		_putchar(digit + '0');
		return (digit);
}
