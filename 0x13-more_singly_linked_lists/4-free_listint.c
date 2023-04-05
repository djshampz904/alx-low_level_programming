#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head
 */

void free_listint(listint_t *head)
{
	listint_t *curr, *tmp;

	curr = head;

	while (curr->next != NULL)
	{

		tmp = curr;
		curr = curr->next;

		free(tmp);
	}
}
