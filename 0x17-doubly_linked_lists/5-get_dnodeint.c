#include "lists.h"
#include "1-dlistint_len.c"

/**
 * get_dnodeint_at_index - get node at a certain position
 * @head: pointer to the head
 * @index: position to check
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *current;

	len = dlistint_len(head);
	if (index > len)
		return NULL;

	current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	return (current);
}
