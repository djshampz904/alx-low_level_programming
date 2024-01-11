#include "lists.h"

/**
 * get_dnodeint_at_index - function to return nth node of a dlistint_t list
 * @head: pointer to head of dlistint_t list
 * @index: index of node to return
 * Return: nth node of a dlistint_t list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
