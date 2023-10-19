#include "lists.h"

/**
 * list_len - print the number of elements
 * @h: node
 * Return: n_node
 */

size_t list_len(const list_t *h)
{
	size_t n_node;

	n_node = 0;

	while (h != NULL)
	{
		h = h->next;
		n_node++;
	}
	return (n_node);
}
