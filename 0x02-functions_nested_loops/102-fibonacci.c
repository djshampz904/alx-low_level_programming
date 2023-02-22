#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int counter, b, c;
	unsigned int next;

	b = 1;
	c = 2;
	counter = 0;
	printf("%d, %d, ", b, c);
	while (counter < 48)
	{
		next = b + c;
		printf("%u, ", next);
		b = c;
		c = next;
		counter++;
	}
	next = b + c;
	printf("%u\n", next);
	putchar('\n');
	return (0);
}
