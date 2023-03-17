#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates smemory for an array
 *
 * @nmemb: number of elements
 * @size: size of elements in bytess
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; ptr[i] != '\0'; i++)
		ptr[i] = 0;
	return (ptr);
}
