#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer to head pointer
 * @index: index to remove
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int current_index = 0;

	current_node = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current_node = current_node->next;
		free(*head);
		*head = current_node;
		return (1);
	}
	else
	{
		while (current_node != NULL && current_index != index - 1)
		{
			current_index++;
			current_node = current_node->next;
		}

		if (current_index != index - 1)
			return (-1);
		previous_node = current_node->next;
		current_node->next = current_node->next->next;
		free(previous_node);
		return (1);
	}
}
