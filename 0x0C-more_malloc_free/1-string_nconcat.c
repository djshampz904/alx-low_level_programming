#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * string_nconcat - concatinates two strings
 *
 * @s1: string one to check
 * @s2: string two to use
 * @n: integer to use to allocate memory
 * Return: character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, len1, len2;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		;
	else
		len2 = len2 - (len2 - n);
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (0);
	for (i = 0; i < len1; i++)
	{
		ptr[j] = s1[i];
		j++;
	}
	for (i = 0; i < len2; i++)
	{
		ptr[j] = s2[i];
		j++;
	}
	ptr[j++] = '\0';
	return (ptr);
}
