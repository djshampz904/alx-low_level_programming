#include "main.h"

/**
 * cap_string - make all the words start with capital
 *
 * @s: string to check
 * Return: char
 */

char *cap_string(char *s)
{
	int i, x, found = 1;
	char seperators[] = {' ', '\n', '\t', '?', '"', '(', ')', '.', ',',
				'{', '}', '!', ';',};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; seperators[x] != '\0'; x++)
			if (s[i] == seperators[x])
				found = 0;
		if (found == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
			found = 1;
		}
		else if (((s[i] <= 'Z' && s[i] >= 'A') ||
			(s[i] <= '9' && s[i] >= '0')) &&
			found == 0)
			found = 1;
	}
	return (s);
}
