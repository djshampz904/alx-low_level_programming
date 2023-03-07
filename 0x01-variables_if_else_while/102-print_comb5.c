#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int n, b, a, c;

	for (n = 48; n <= 57; n++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (a = 48; a <= 57; a++)
			{
				for (c = a + 1; c <= 57; c++)
				{
					putchar(n);
					putchar(b);
					putchar(' ');
					putchar(a);
					putchar(c);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
