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
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
