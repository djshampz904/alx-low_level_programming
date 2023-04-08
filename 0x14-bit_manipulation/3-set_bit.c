#include "main.h"

/**
 * set_bit - set bit at certain index to a 1
 * @n: pointer to n;
 * @index: postition to change
 * Return: integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, num;

	i = 1;
	num = sizeof(n) * 8 - 1;
	i <<= ((sizeof(n) * 8) - 1);

	if (index >= sizeof(n) * 8)
		return (-1);
	while (i > 0)
	{
		if (num == index)
		{
			*n |= i;
		}
		i = i >> 1;
		num--;
	}
	return (1);
}
