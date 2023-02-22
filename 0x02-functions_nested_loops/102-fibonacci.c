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
		if ((counter < 47))
			printf("%u, ", next);
		else
			printf("%u\n", next);
		b = c;
		c = next;
		counter++;
	}
	putchar('\n');
	return (0);
}
