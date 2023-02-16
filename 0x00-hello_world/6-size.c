#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;
	float f;
	long int g;
	long long int h;


	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(g));
	printf("Size of a long long int: %i byte(s)\n", sizeof(h));
	printf("Size of a float: %i byte(s)\n", sizeof(f));

	return (0);
}
