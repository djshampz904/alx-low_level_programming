#include "main.h"

/**
 * _strcmp - compare strings and return an int
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	diff = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			diff =  (s1[i] - s2[i]);
			break;
		}
		else if (s1[i] < s2[i])
		{
			diff =  (s1[i] - s2[i]);
			break;
		}
		else if (s2[i] == '\0' && s1[i] == '\0')
		{
			diff =  0;
			break;
		}
	}
	return (diff);
}
