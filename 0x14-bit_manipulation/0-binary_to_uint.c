#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_to_uint - changed a binary number to int
 * @b: pointer to the string
 * Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
	int result = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		result <<= 1;
		if (*b == '1')
			result |= 1;
		else if (*b != '0')
			return (0);

		b++;
	}
	return (result);
}
