/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0 success
 */

#include "main.h"

void print_alphabet_x10(void)
{
	int i;
	char a;

	i = 0;

	while (i > 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
