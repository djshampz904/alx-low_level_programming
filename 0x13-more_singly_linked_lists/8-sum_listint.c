#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - find sum of data inlist
 * @head: pointer to head
 * Return: 0 or sum
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	sum = 0;
	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
