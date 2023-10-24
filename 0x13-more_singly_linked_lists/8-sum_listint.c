#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: head list
 * Return: sum of all the date
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
