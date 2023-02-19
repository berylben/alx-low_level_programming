/**
 * main - starting point
 *
 * Return: 0 success
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
