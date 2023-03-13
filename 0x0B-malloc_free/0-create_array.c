#include "main.h"
#include <stdlib.h>

/**
 * create_array - create and array of characters
 *
 * @size: size of the array to be created
 * @c: character to check for
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *myarr;

	if (size == 0)
	{
		return (0);
	}
	myarr = (char *) (malloc(sizeof(char) * size));
	if (myarr == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
		myarr[i] = c;
	return (myarr);
}
