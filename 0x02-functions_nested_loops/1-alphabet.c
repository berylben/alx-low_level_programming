/**
 * print_alphabet - the function prints lowercase letters
 *
 * Return: Always 0 (success)
 */

#include "main.h"

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
