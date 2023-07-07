#include "lists.h"

/**
 * dlistint_len - find number of elements in a double linked list
 * @h: pointer to head of the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int elements;
	const dlistint_t *temp;

	elements = 0;
	temp = h;

	while (temp != NULL)
	{
		elements++;
		temp = temp->next;
	}

	return (elements);
}
