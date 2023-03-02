/**
 * _strncat - copies a string of a number
 * @dest: stores a string copy
 * @src: source of a string
 * @n: number of bytes from the source
 * Return: pointer to resulting string dest
 */

#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
