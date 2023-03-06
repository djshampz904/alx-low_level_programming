#include "main.h"
#include "2-strchr.c"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to string location
 * @accept: pointer to substring
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_strchr(accept, s[i]))
			count += 1;
		else
			break;
	}
	return (count);
}
