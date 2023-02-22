#include <stdio.h>

/**
 * man - Entry point
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int b, c, next;

	b = 1;
	c = 2;
	printf("%d, %d, ", b, c);
	while (next < 50)
	{
		next = b + c;
		if (!(next > 50))
			break;
		printf("%d, ", next);
		b = c;
		c = next;
	}
	putchar('\n');
	return (0);
}
