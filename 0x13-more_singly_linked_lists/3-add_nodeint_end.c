#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include "2-add_nodeint.c"

/**
 * add_nodeint_end - add node at the end of the list
 * @head: pointer to the head pointer
 * @n: value to fill
 * Return: pointer to added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *s, *newNode;

	if (*head == NULL)
	{
		add_nodeint(head, n);
		return (*head);
	}

	s = *head;
	while (s->next != NULL)
		s = s->next;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	s->next = newNode;

	return (newNode);
}
