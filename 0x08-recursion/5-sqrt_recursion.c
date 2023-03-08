/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: number input
 * Return:  square root value,
 * -1 if n does not have natural square root,
 */

#include "main.h"

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (sqrt_recursion(n, i));
}
