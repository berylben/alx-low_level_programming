/**
 * main - starting point
 *
 * Return: 0 return value
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
