#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: integer amount of memory to allcate
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(*ptr) * b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
