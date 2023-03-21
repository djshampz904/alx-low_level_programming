#include "dog.h"

/**
 * _strlen - gets the length of a string
 *
 * @s: string to check
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count += 1;

	return (count);
}
