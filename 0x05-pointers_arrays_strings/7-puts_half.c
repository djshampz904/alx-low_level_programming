#include "main.h"
#include "2-strlen.c"

/**
 * puts_half  - prints half of the string
 *
 * @str: string to check
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = 0; str[i] != '\0'; i++)
		if (i > (len - 1) / 2)
			_putchar(str[i]);
}
