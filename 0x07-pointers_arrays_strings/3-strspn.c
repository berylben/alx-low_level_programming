/**
 * _strspn - function that gets the length of a prefix substring
 * @s: a pointer to initial segment
 * @accept: a pointer to prefix to be measures
 * Return: a number of bytes in s which consists
 * only of bytes from accept
 */

#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
