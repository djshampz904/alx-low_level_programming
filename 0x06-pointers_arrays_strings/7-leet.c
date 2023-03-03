#include "main.h"
#include "5-string_toupper.c"

/**
 * leet - encodes a string to 1337
 *
 * @s: string to encode
 * Return: character
 */

char *leet(char *s)
{
	int i, x;
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int arr2[] = {45, 13, 50, 18, 63, 31, 61, 29, 59, 27};

	for (i = 0; s[i] != '\0'; i++)
		for (x = 0; arr[x] != '\0'; x++)
			if (s[i] == arr[x])
				s[i] = s[i] - arr2[x];
	return (s);
}
