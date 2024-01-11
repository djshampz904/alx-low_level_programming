#include "lists.h"

/**
 * sum_dlistint - function to return sum of all data in a dlistint_t list
 * @head: pointer to head of dlistint_t list
 * Return: sum of all data in a dlistint_t list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
