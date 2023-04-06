/**
 * add_nodeint - function that adds node to beginning
 * @n: variable to the linked list
 * @head: address of the new node
 * Return: the address of the new element
 */

#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
