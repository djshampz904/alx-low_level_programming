#include "lists.h"
#include <stddef.h>

/**
 * list_len - lists number of elements
 *
 * @h: pointer to structure
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *current;

	i = 0;
	current = h;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
