#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes instance of a dog struct
 *
 * @d: pointer to the struct
 * @age: age of the dog
 * @name: name of the dog
 * @owner: owner of the dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
