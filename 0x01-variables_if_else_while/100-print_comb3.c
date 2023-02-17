#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int n, b;

	for (n = 48; n <= 57; n++)
	{
		for (b = n + 1; b <= 57; b++)
		{
			putchar(n);
			putchar(b);
			if (n != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
