/**
 * rev_string - a function that reverses a string
 * @s: string input
 * Return: always 0 (success)
 */

#include "main.h"

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char c;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	for (j = 0; j <= i; j++, i--)
	{
		c = s[i];
		s[j] = s[i];
		s[i] = c;
	}
}
