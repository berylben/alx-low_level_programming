/**
 * _puts_recursion - function prints string followed by a new line
 * @s: pointer to a string
 * Return: nothing
 */

#include "main.h"

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
