/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function to use to print name
 * Return: 0 success
 */

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
