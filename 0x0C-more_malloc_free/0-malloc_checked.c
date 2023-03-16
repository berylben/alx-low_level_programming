/**
 * malloc_checked - Entry point
 * @b: amount input
 * Return: a pointer to allocated memory
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
