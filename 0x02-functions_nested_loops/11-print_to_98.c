#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from number n to 98
 *
 * @n: argument to pass
 *
 * Return: void
 */

void print_to_98(int n)
{
	int a;
<<<<<<< HEAD
=======

>>>>>>> 1cc7227eaa3bdbc58677f61993b84989ea8172fa
	if (n < 98)
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else
				printf("%d", a);
		}
	else
	{
		for (a = n; a >= 98; a--)
		{
			if (a != 98)
				printf("%d, ", a);
			else
				printf("%d", a);
		}
	}
	printf("\n");
}
