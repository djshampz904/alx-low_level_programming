#include "dog.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * new_dog - create a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: pointer to the new instance
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *ndog;
	char *a, *b;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (0);
	a = malloc((len1 + 1) * sizeof(char));
	if (a == NULL)
	{
		free(ndog);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		a[i] = name[i];

	a[i] = '\0';
	ndog->name = a;
	ndog->age = age;

	b = malloc((len2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free(ndog);
		return (NULL);
	}

	for (i = 0; i < len2; i++)
		b[i] = owner[i];
	b[i] = '\0';
	ndog->owner = b;
	return (ndog);
}
