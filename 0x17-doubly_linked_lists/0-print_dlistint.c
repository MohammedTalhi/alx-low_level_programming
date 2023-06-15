#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0; // Variable to store the number of nodes

	while (head)
	{
		printf("%i\n", head->n); // Print the value of the current node
		count++; // Increment the number of nodes
		head = head->next; // Move to the next node
	}

	return count; // Return the number of nodes in the list
}
