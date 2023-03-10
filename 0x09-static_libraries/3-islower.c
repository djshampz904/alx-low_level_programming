#include "main.h"

/**
 * _islower - check if its lower alpahbet
 * @c: integer to check for
 * Return: 1 or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
