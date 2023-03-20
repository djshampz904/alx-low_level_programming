#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates smemory for an array
 *
 * @min: minimum
 * @max: size of elements in bytess
 * Return: nothing
 */

int *array_range(int min, int max)
{
	unsigned int i, size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
