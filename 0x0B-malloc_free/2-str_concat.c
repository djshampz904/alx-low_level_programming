#include "main.h"
#include <stdlib.h>

/**
 * str_concat - join two strings together
 *
 *  @s1: string to check
 *  @s2: string to check
 *  Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j = 0;
	char *ptr;

	ptr = (char *) malloc(sizeof(s1) + sizeof(s2));
	if (ptr == NULL)
		return (0);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i++] = '\0';

	return (ptr);
}
