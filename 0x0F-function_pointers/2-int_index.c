#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - finds number in an array
 *
 * @array: array to loop
 * @size: size of the array
 * @cmp: function to pass
 *
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL || size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
