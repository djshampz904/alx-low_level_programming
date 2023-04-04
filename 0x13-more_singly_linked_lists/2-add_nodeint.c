#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds node to the beginning of a list
 * @head: pointer to the heads pointer
 * @n: value to add
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *s;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);

	s->n = n;
	s->next = *head;
	*head = s;

	return (s);
}
