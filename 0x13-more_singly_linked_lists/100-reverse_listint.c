#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer to the head of the list
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *current;
	listint_t *next_node;

	previous = NULL;
	current = *head;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = previous;

		previous = current;
		current = next_node;
	}
	*head = previous;

	return (*head);
}
