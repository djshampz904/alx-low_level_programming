#include "main.h"

/**
 * cap_string - make all the words start with capital
 *
 * @s: string to check
 * Return: char
 */

char *cap_string(char *s)
{
	int i, found;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '?' ||
			s[i] == '\"' || s[i] == '(' || s[i] == '.' || s[i] == ')'
			|| s[i] == '}' || s[i] == '{' || s[i] == '!' || s[i] == ';'
			|| s[i] == ',')
			found = 0;
		else if (found == 0 && s[i] <= 122 && s[i] >= 97)
		{
			s[i] = s[i] - 32;
			found = 1;
		}
		else if (s[i] <= 89 && s[i] >= 65)
			found = 1;
	return (s);
}
