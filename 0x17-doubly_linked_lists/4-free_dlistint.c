#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: None.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head; // Pointer to track the current node

	while (current)
	{
		dlistint_t *temp = current; // Temporary pointer to hold the current node
		current = current->next; // Move to the next node
		free(temp); // Free the current node
	}
}
