#include "main.h"

/**
 * print_last_digit - return last digit of a value
 *
 * @n: integer to check
 *
 * Return: integer last value of a digit
 */

int print_last_digit(int n)
{
	int lastdigit, myabs;

	if (n < 0)
		myabs = n * -1;
	else
		myabs = n;

	lastdigit = myabs % 10;
	_putchar(lastdigit + '0');

	return (lastdigit);
}
