/**
 * _isalpha - checks for alphabet characters
 * @c: single letter input
 * Return: 1 if its a letter , 0 if otherwise
 */

#include "main.h"

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
		return (0);
}
