#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to 2D array
 *
 * @width: width of the array
 * @height: height of array
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);
	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
