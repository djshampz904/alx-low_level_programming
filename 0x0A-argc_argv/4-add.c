#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Always Success
 */


int main(int argc, char *argv[])
{
	int j, i, total = 0;
	char *arg;

	for (i = 1; i < argc; i++)
	{
		*arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(arg);
	}
	printf("%d\n", total);
	return (0);
}
