#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of the list
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *to_del;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	to_del = *head;
	*head = (*head)->next;
	free(to_del);

	return (data);
}
