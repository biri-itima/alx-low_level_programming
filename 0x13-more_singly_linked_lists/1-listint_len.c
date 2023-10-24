#include "lists.h"

/**
 * listint_len - returns the len of the list
 * @h: list
 * Return: Count
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
