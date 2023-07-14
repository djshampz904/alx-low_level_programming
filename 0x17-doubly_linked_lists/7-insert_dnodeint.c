#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to head pointer
 * @idx: index to go to
 * n: data to check
 * Return: pointer to node inserted
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current;
	unsigned int count;

	if (*h == NULL || idx == 0) {
		newNode = add_dnodeint(h, n);
		return (newNode);
	}

	current = *h;
	count = 1;

	while (current->next != NULL && count < idx - 1) {
		current = current->next;
		count++;
	}

	if (current == NULL && count < idx) {
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	} else {
		newNode = (dlistint_t*)malloc(sizeof(dlistint_t));

		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = current->next;

		if (current->next != NULL)
			current->next->prev = newNode;

		newNode->prev = current;
		current->next = newNode;

		return (newNode);
	}
	return newNode;
}
