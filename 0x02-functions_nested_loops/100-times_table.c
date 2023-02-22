#include "main.h"
/**
 * print_times_table -  print out time table of nine
 * @n: integer to check
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int a, b, prod;

	if (n > 15 || n < 0)
		;
	else
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				prod = a * b;
				if (prod >= 10 && prod < 100)
				{
					_putchar(' ');
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
				else if (prod > 99)
				{
				_putchar('0' + (prod / 100));
				_putchar('0' + ((prod / 10) % 10));
				_putchar('0' + (prod % 10));
				}
				else if (prod < 10 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod);
				}
				else
					_putchar('0' + prod);
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
