/**
 * _isdigit - checks for a digit 0 through 9
 * @c: integer input
 * Return: 1 if c is digit, o otherwisw
 */

#include "main.h"

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
