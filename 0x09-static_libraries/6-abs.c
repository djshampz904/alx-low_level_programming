#include "main.h"

/**
 * _abs - returns absolute value of a number
 *
 * @n: integer to check for
 *
 * Return: integer absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
