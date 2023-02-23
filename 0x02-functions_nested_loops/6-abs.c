/**
 * _abs - computes the absolute value of an integer
 * @r: integer input
 * Return: absolute value of r
 */

#include "main.h"

int _abs(int r)
{
	if (r <= 0)
	{
		return (r);
	}
	else
		return (r * -1);
}
