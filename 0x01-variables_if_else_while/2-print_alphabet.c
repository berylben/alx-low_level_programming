/**
 * main - starting point
 *
 * Return: 0 return value
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	return (0);
}
