#include "main.h"

/**
 * times_table -  print out time table of nine
 *
 * Return: nothing
 */

void times_table(void)
{
	int a, b, prod;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			prod = a * b;
			if (prod >= 10)
			{
			_putchar('0' + (prod / 10));
			_putchar('0' + (prod % 10));
			}
			else if (prod < 10 && b != 0)
			{
				_putchar(' ');
				_putchar('0' + prod);
			}
			else
				_putchar('0' + prod);

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
