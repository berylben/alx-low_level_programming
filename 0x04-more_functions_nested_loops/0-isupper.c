/**
 * _isupper - checks for uppercase
 * @c: input letter
 * Return: 1 if c is upper, 0 otherwise
 */

#include "main.h"

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
