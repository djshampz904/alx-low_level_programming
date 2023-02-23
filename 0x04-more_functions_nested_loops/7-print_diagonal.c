#include "main.h"

/**
 * print_diagonal - print diagonal to terminal
 *
 * @n: integer to check
 * Return: noothing
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= a - 1; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
