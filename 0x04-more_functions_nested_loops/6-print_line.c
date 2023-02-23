#include "main.h"

/**
 * print_line - print line
 *
 * @n: integer to check
 * Return: 0 Always success
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar('_');
	_putchar('\n');
}
