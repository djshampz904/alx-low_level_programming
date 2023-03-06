#include "main.h"

/**
 * _memset - fill n bytes of memory with constant b
 *
 * @s: pointer to array
 * @b: const character to fill with
 * @n: number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
