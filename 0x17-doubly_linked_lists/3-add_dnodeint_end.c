#include "lists.h"

/**
 * add_dnodeint_end - add node to end of the list
 * @head: pointer to head pointer
 * @n: data to insert
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current;

	current = *head;
	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		current->next = newNode;
		newNode->prev = current;
	}

	return (newNode);
}
