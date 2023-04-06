/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 * @head: address of the head of the listint_t list
 * @n: integer for a new node to contain
 * Return: the address of the new element, or NULL if it fails
 */

#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		listint_t *ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = node;
	}

	return (node);
}
