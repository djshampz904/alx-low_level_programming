#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function for all values of an array
 *
 * @size: size of the array
 * @array: pointer to array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
