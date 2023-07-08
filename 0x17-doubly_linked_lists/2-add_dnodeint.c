#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of list
 * @head: pointer to head pointer
 * @n: data to insert
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (0);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}

	return (newNode);
}
