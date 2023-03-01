#include "main.h"

/**
 * *_strncpy - copy string up to n bytes
 *
 * @dest: where to copy to
 * @src: where to copy from
 * @n: number of bytes to use
 * Return:pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
