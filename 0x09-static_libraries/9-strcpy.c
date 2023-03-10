#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copy string to destination
 *
 * @dest: where to copy to
 * @src: where to copy from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
