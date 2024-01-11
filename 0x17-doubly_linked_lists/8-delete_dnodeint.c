#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete node at nth index
 * @head: double pointer of dlistint_t type to head of linked list
 * @index: index to delete node
 * Return: 1 if successful else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	temp2 = temp->next->next;
	free(temp->next);
	temp->next = temp2;
	if (temp2 != NULL)
		temp2->prev = temp;

	return (1);
}
