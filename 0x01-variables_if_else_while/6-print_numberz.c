/**
 * main - starting point
 *
 * Return: 0 success
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
