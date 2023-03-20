#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>

/**
 * argstostr - concatinates arguments
 *
 * @ac - argument count
 * @av - array of arguments
 * Return: string pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *ptr;

	if (ac == 0 || **av == '\0')
		return (0);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k++] = '\n';
	}
	ptr[k++] = '\0';
	return (ptr);
}
