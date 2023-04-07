#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pops head of the list
 * @head: pointer to list
 * Return: 0 or data of the node
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	i = tmp->n;
	free(tmp);

	return (i);
}
