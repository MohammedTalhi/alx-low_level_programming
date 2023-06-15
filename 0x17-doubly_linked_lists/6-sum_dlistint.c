#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all nodes in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: The sum of all node values.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0; // Variable to store the sum

	if (!head)
		return 0; // Return 0 if the list is empty

	while (head)
	{
		sum += head->n; // Add the value of the current node to the sum
		head = head->next; // Move to the next node
	}

	return sum; // Return the sum
}
