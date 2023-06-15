#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a doubly linked list.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value of the new node.
 * Return: Address of the newly inserted node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h; // Pointer to track the current node
	dlistint_t *new_node = malloc(sizeof(dlistint_t)); // Allocate memory for the new node
	unsigned int count;

	if (!h || !new_node)
		return NULL; // Return NULL if invalid parameters or memory allocation fails

	new_node->n = n; // Set the value of the new node

	if (!(*h)) // If the list is empty
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return new_node;
	}

	if (idx == 0) // If index is 0, insert at the beginning
		return add_dnodeint(h, n);

	for (count = 0; current; count++)
	{
		if (count == idx) // If the index matches the desired position
		{
			new_node->prev = current->prev;
			(current->prev)->next = new_node;
			current->prev = new_node;
			new_node->next = current;
			return new_node;
		}
		else if (!current->next && count + 1 == idx) // If the index is at the end of the list
			return add_dnodeint_end(h, n);

		current = current->next; // Move to the next node
	}
	return NULL; // Return NULL if index is out of range
}

