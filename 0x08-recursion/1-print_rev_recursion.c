/**
 * _print_rev_recursion - function prints a string in reverse
 * @s: pointer to a string
 * Return: no return
 */

#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
