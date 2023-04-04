#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - print all elements of a list
 *
 * @h: pointer to the struct
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *s;
	size_t i = 0;

	if (h == NULL)
		return (0);
	s = h;
	while (s != NULL)
	{
		printf("%d\n", s->n);
		s = s->next;
		i++;
	}
	return (i);
}
