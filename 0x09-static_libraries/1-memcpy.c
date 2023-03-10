#include "main.h"

/**
 * _memcpy - copy a memory area to another memory area
 * @dest: where to copy to
 * @src: where to copy from
 * @n: number of bytes to copy
 * Return: pointer to s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
