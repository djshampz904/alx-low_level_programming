#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - return last digit of a value
 *
 * @n: integer to check
 *
 * Return: integer last value of a digit
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
