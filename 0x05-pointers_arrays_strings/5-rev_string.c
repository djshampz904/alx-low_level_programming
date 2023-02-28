#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 *
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len, i;
	char temp;

	len = _strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
