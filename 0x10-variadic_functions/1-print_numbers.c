#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers passed seperated by custom separator
 *
 * @seperator: character to print between the numbers
 * @n: number on arguments passed
 * Return: nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1 && seperator != NULL)
			printf("%d%s", va_arg(args, int), seperator);
		else
			printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
