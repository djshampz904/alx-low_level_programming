#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - returns number of elements in a lists
 *
 * @h: pointer to the list
 * Return: size of list or number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *s;
	size_t i;

	if (h == NULL)
		return (0);
	s = h;
	i = 0;
	while (s != NULL)
	{
		i++;
		s = s->next;
	}
	return (i);
}
