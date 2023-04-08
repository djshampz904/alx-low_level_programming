#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_binary - print binary of a number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	unsigned int mask;
	int i, leading_zeroes;

	leading_zeroes = 1;
	for (i = 31; i >= 0; i--)
	{
		mask = 1u << i;
		if ((n & mask) || !leading_zeroes)
		{
			leading_zeroes = 0;
			_putchar((n & mask) ? '1' : '0');
		}
	}
	if (leading_zeroes)
		_putchar('0');
}
