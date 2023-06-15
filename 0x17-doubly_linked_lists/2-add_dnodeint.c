#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: Value of the new node.
 * Return: Pointer to the newly added node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;
	return new_node;
}
