#include "lists.h"
/**
 * add_node - add a new node to head
 * @head: a pointer to a pointer head
 * @str: string
 * Return: new element addr
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i, count = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_node->len = count;
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
