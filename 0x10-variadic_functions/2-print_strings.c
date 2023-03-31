#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings seperated by custom separator
 *
 * @seperator: character to insert between the string
 * @n: size of arguments
 * Return: nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args,  char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(args);
	printf("\n");
}
