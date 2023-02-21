#include "main.h"

/**
 * print_sign - check for sign of the number
 *
 * @n: integer to check
 *
 * Return: 1 or 0 otherwise
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
