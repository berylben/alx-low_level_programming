/**
 * _strncpy - a function that copies a string
 * @dest: buffer that stores te string copy
 * @src: source of the string
 * @n: maximum number of bytes to be copied from the source
 * Return: a pointer to the resulting string dest
 */

#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
