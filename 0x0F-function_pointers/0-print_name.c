#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name to std output
 *
 * @name: character to check
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
