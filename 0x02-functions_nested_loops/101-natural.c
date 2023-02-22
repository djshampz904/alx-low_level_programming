#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always Success
 */

int main(void)
{
	int sum, a;

	for (a = 0; a < 1024; a++)
		if ((a % 3) == 0 || (a % 5) == 0)
			sum += a;
	printf("%d\n", sum);

	return (0);
}
