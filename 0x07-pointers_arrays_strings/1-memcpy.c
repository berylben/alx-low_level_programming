/**
 * _memcpy - function that copies n bytes from memory
 * area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */

#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = dest;
	char *s = src;

	for (i = 0; i < n; i++)
		d[i] = s[i];
	return (dest);
}
