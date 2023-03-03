#include "main.h"

/**
 * cap_string - make all the words start with capital
 *
 * @s: string to check
 * Return: char
 */

char *cap_string(char *s)
{
	int i, x, cap = 32;
	char seperators[] = {' ', '\n', '\t', '?', '"', '(', ')', '.', ',',
				'{', '}', '!', ';',};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - cap;
		cap = 0;
		for (x = 0; x <= 12; x++)
			if (s[i] == seperators[x])
			{
				x = 12;
				cap = 32;
			}
	}
	return (s);
}
