#include "lists.h"

/**
 * sum_dlistint - sum of all data in lisat
 * @head: pointer to head of the list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
