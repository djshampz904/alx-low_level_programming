#include "main.h"

/**
 * _isalpha - checking for alphabets
 * @c: integer to check
 *
 * Return: 1 or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 89))
		return (1);
	else
		return (0);
}
