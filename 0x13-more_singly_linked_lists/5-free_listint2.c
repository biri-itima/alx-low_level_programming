#include "lists.h"

/**
 * free_listint2 - frees a list and modify head
 * @head: head pointer to a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
