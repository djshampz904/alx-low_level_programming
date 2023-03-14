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
	unsigned int i;
	char *ptr;

	if (str == NULL)
		return (0);
	ptr = (char *) (malloc(sizeof(str)));
	if (ptr == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i++] = '\0';
	return (ptr);
}
