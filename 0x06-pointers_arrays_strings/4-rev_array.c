#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse and array of integers
 *
 * @a: pointer to first value of array
 * @n: elements in array
 * Return: Nothing
 */


void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}
