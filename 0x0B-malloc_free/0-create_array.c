/**
 * create_array - function that creates an array of char
 * s and initializes it with a specific char
 * @size: size of memory to print
 * @c: character input
 * Return: NULL if size = 0, a pointer of the array,NULL if it fails
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
