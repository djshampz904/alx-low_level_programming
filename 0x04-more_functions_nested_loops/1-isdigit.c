#include "main.h"

/**
 * _isdigit - check if its a digit
 *
 * @c: integer to check
 * Return: 0 Always Success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
