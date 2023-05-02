#include "lists.h"

/**
 * insert_nodeint_at_index - add node at index
 * @head: pointer to head of list
 * @idx: index position
 * @n: number to insert
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL && idx != 0)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

