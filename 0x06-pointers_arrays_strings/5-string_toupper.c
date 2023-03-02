#include "main.h"

/**
 * string_toupper - change character from lower to upper
 *
 * @c: character to check for
 * Return: a character
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] <= 122 && c[i] >= 97)
			c[i] = c[i] - 32;
	}
	return (c);
}
