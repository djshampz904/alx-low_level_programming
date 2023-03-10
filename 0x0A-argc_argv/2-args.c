#include <stdio.h>

/**
 * main - entry point
 * @argc: counts of arguments
 * @argv: array of argumennts
 * Return: 0 Always Sucess
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
