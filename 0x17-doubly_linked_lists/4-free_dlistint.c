#include "lists.h"

/**
 * free_dlistint - function to free a dlistint_t list
 * @head: pointer to head of doubly linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
