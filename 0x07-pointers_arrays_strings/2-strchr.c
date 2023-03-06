#include "main.h"

/**
 * _strchar - locates a character in a string
 * 
 * @s: pointer to the string location
 * @c: character to look for
 * Return: pointer to the first occurence or null 
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	return (0);
}
