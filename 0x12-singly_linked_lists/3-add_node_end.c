#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "2-add_node.c"
/**
 * add_node_end - adds node at the end of the list
 *
 * @head: pointer to the pointer of the head
 * @str: string to insert into list
 * Return: list added
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *current;

	current = *head;

	if (*head == NULL)
	{
		add_node(head, str);
		return (*head);
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	while (current->next != NULL)
		current = current->next;

	current->next = newNode;
	return (newNode);
}
