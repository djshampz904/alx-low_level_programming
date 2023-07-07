#include "lists.h"

/**
 * print_dlistint - prints items in a linked list
 * @h: pointer to the head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes;
	const dlistint_t *temp;

	nodes = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		nodes++;
		temp = temp->next;
	}

	return nodes;
}
