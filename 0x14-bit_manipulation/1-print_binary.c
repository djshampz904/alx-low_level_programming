#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_binary - print binary of a number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	int leading_zeroes;

	leading_zeroes = 1;
	i = 1;
	i <<= ((sizeof(i) * 8) - 1);

	while (i > 0)
	{
		if ((i & n) || !leading_zeroes)
		{
			leading_zeroes = 0;
			_putchar((n & i) ? '1' : '0');
		}
		i = i >> 1;
	}
	if (leading_zeroes)
		_putchar('0');
}
