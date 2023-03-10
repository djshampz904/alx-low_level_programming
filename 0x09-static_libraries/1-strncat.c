#include "main.h"
#include "2-strlen.c"
/**
 * _strncat - join two string up to n bytes
 *
 * @dest: where to copy to
 * @src: where to copy from
 * @n: up to n bytes
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len++] = src[i];
	return (dest);
}
