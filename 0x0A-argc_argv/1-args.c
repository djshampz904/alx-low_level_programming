#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: count of number of arguments
 * @argv: array with arguments
 *
 * Return: 0 Always Success
 */

int main(int argc,  __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
