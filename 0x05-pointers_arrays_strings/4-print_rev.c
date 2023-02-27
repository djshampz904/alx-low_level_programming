#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - reverse a string
 *
 * @s: string to be reversed
 * Return: nothing
 */

void print_rev(char *s)
{
	int length, i;

	length = _strlen(s);
	for (i = 0; s[i] != '\0'; i++)
		_putchar((s[length - i - 1]));
	_putchar('\n');
}
