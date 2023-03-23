#include "function_pointers.h"

/**
 * print_name - prints name to std output
 *
 * @name: character to check
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
