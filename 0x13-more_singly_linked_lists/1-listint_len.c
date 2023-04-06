/**
 * lists_len - returns a number of elements
 * in a linked listint_t
 * @h: head of the listint_t list
 * Return: The number of elemets in the listint_t list
 */

#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		i++;
		ptr = ptr->next;
	}

	return (i);
}
