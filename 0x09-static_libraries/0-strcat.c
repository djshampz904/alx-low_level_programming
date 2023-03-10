#include "main.h"

/**
 * _strcat - joins two strings together
 *
 * @src: where to copy from
 * @dest: where to move to
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	dest[i++] = '\0';

	return (dest);
}

