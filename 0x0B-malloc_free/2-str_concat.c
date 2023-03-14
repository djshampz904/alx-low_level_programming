#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * str_concat - join two strings together
 *
 *  @s1: string to check
 *  @s2: string to check
 *  Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	ptr = (char *) malloc(sizeof(char) * len1 + len2 + 1);
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
