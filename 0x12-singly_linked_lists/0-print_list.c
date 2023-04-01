#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - print elements in a list
 *
 * @h: pointer to a structure
 * Return: number of elemets
 */

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *current;

	current = h;
	i = 0;
	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] ", current->len);
			printf("%s\n", current->str);
		}
		else
			printf("[0] (nil)\n");
		current = current->next;

		i++;
	}
	return (i);
}
