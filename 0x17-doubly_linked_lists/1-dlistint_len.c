#include "lists.h"

/**
 * dlistint_len - Returns the length of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0; // Variable to store the length of the list

	while (head)
	{
		head = head->next; // Move to the next node
		count++; // Increment the count
	}

	return count; // Return the length of the list
}
