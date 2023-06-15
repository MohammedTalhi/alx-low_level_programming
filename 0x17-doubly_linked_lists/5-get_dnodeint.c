#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the nth node of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to retrieve.
 * Return: Pointer to the nth node of the list, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head; // Pointer to track the current node
	unsigned int count = 0; // Variable to track the current index

	while (count < index && current)
	{
		current = current->next; // Move to the next node
		count++; // Increment the index count
	}

	if (!current)
		return NULL; // Index out of range, return NULL

	return current; // Return the nth node
}
