#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: pointer to head of list
 */

void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;

		free(temp->str);
		free(temp);
	}
}
