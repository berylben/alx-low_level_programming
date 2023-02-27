/**
 * *_strcpy - copies a string pointed to by src
 * @dest: string input
 * @src: string input
 * Return: 0 always
 */

#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != 0)
		i++;

	for (j = 0; j <= i; j++)
		dest[j] = src[j];

	return (dest);
}
