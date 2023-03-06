/**
 * _memset - function that fills the memory with a constant byte
 * @s: pointer to memory araea to be filled
 * @b: character that fills the memory area
 * @n: number of bytes to be filled
 * Return: a pointer memory s
 */

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *c = s, value = b;

	for (i = 0; i < n; i++)
		c[i] = value;
	return (c);
}
