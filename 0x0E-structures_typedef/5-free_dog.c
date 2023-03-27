/**
 * free_dog - function that frees dogs
 * @d: pointer
 * Return: Always (0) success
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
