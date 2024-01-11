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

#endif