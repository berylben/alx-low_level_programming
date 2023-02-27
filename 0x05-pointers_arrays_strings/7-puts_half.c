/**
 * puts_half - prints half the string
 * @str: string input
 * Return: always 0
 */

#include "main.h"

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

	i--;

	if (i % 2 == 0)
		j = (i + 1) / 2;
	else if (i % 2 != 0)
		j = i / 2;

	for (j += 1; j <= i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
