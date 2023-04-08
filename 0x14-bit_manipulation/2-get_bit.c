#include "main.h"
#include <stddef.h>

/**
 * get_bit - return value of a bit
 * @n: number to check
 * @index: place index
 * Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, num, j;

	i = 1;
	num = sizeof(n) * 8 - 1;
	i <<= ((sizeof(n) * 8) - 1);

	while (i > 0)
	{
		if (num == index)
		{
			j = ((n & i) ? 1 : 0);
		}
		i = i >> 1;
		num--;
	}
	return (j);
}
