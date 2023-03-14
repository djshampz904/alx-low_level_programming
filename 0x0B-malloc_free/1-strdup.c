#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 *
 * @str: string to duplicate
 * Return: pointer
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *ptr;

	if (str == NULL)
		return (0);
	for (len = 0; str[len] != '\0'; len++)
		;
	ptr = (char *) malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i++] = '\0';
	return (ptr);
}
