/**
 * _strpbrk - function that locates the first occure
 * nce in string s of any bytes in the string accept
 * @s: pointer to string
 * @accept: pointer to a string
 * Return: a pointer to bytes in s that matches one of bytes
 * in accept,NULL if no such byte is found
 */

#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
