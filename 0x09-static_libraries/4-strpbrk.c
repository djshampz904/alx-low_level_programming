#include "main.h"
#include "2-strchr.c"
/**
 * _strpbrk - gets first location of character in string
 *
 * @s: string to check
 * @accept: characters to use
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (_strchr(accept, s[i]))
			return (&s[i]);
	return (0);
}
