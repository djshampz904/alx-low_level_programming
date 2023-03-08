#include "main.h"

/**
 * _strlen_recursion - get length of string
 *
 * @s: start of string
 * Return: length in int
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
