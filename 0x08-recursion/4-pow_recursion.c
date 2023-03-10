/**
 * _pow_recursion - function returns the value of x raised to y
 * @x: base
 * @y: exponent
 * Return: value of x raised to power y
 */

#include "main.h"

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
