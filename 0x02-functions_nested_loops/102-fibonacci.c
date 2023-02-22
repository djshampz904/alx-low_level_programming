#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int counter, b, c, next;

	b = 1;
	c = 2;
	counter = 0;
	printf("%d, %d, ", b, c);
	while (counter <= 50)
	{
		next = b + c;
		if ((counter < 50))
			printf("%d, ", next);
		else
			printf("%d\n", next);
		b = c;
		c = next;
		counter++;
	}
	putchar('\n');
	return (0);
}
