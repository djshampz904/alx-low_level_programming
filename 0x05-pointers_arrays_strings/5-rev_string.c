#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 *
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int length, i, k;
	char j[10];
	
	length = _strlen(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		j[i] = s[length - i - 1];
	}
}
