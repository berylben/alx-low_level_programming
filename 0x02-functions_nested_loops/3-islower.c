/**
 * int _ islower - checks for lowercase characters
 *
 * Return: 1 if lowercase or 0 if uppercase
 */

#include "main.h"

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
