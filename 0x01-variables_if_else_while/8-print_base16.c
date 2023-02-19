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
	char ch = 'a';

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
