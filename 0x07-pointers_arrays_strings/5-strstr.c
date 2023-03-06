#include "main.h"

/**
 * _strstr  - check for string in a string
 *
 * @haystack: string to look in
 * @needle: string to look for
 * Return: null or the start of the string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (0);
}
