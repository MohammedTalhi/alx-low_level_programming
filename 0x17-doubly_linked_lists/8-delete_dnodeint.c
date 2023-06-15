#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a doubly linked list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: Index of the node to delete.
 * Return: 1 if successful, -1 if the deletion fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head; // Pointer to track the current node
	unsigned int count;

	if (!head || !current)
		return -1; // Return -1 if invalid parameters or empty list

	if (index == 0) // If index is 0, delete the first node
	{
		current = current->next;
		free(*head);
		*head = current;
		if (*head)
			(*head)->prev = NULL;
		return 1;
	}

	for (count = 0; current; count++)
	{
		if (count == index) // If the index matches the node to be deleted
		{
			if (current->next) // If the node has a next node
			{
				(current->prev)->next = current->next;
				(current->next)->prev = current->prev;
				free(current);
				return 1;
			}
			else // If the node is the last node
			{
				(current->prev)->next = NULL;
				free(current);
				return 1;
			}
		}
		current = current->next; // Move to the next node
	}

	return -1; // Return -1 if index is out of range
}
