/**
 * swap_int - swaps the values of two integers a and b
 * @a: integer input
 * @b: integer input
 * Return: Always 0 (success)
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
