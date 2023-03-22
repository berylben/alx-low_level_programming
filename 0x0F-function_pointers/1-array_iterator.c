/**
 *array_iteration - function that searches for an integer
 * @array: array input
 * @size: size of array
 * @action: pointer to the function you need to use
 * Return: 0 always
 */

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (action != NULL && array != NULL)
		for (j = 0; j < size; j++)
			action(array[j]);
}
