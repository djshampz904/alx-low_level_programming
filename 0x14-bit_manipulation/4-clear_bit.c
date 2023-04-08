#include "main.h"

/**
 * clear_bit - assign the value of bit at index to 0
 * @n: pointer to the integer
 * @index: position to change
 * Return: integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
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
			*n &= ~(i);
		i = i >> 1;
		num--;
	}
	return (1);
}
