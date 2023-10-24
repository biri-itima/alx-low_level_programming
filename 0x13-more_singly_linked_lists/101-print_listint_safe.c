#include "lists.h"
/**
 * print_listint_safe - prints a list
 * @head: pointer to the head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		node_count++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (head <= head->next)
		{
			exit(98);
		}
		head = head->next;
	}

	return (node_count);
}
