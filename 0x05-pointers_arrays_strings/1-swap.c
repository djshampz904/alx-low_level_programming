#include "main.h"

/**
 * swap_int - swap integers around
 *
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
