/*header file for the lists functions*/
#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/*function that prints all the elements of a dlistint_t list*/
size_t print_dlistint(const dlistint_t *h);
/*function to list number of elements in a linked list*/
size_t dlistint_len(const dlistint_t *h);
/*function to add a new node at the beginning of a dlistint_t list*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/*function to add a node at the end of a dlistint_t list*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/*function to free a dlistint_t list*/
void free_dlistint(dlistint_t *head);
/*function that returns the nth node of a dlistint_t linked list.*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/*function that returns the sum of all the data (n) of a dlistint_t linked list*/
int sum_dlistint(dlistint_t *head);
/*function that inserts a new node at a given position.*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/*function that deletes node at index */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif