/**
 * _strchr - function that locates acharacter in a string
 * @s: a pointer to a string
 * @c: pointer to a character
 * Return: first occurrence of c in s, NULL if c is not found
 */

#include "main.h"

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
