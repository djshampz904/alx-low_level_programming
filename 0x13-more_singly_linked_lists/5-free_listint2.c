#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free memory and set head to null
 * @head: pointer to head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;

		free(temp);
	}
	*head = NULL;
}
