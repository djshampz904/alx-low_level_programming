#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - get node at index
 * @index: position
 * @head: pointer to head
 * Return: pointer to element
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	i = 0;
	node = head;
	while (node != NULL && i != index)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (0);
	return (node);
}
