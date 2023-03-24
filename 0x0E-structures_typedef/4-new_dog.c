#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char n_name = *name;
	char n_owner = *owner;
	dog_t *d = malloc(sizeof(*d));

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = &n_name;
	d->age = age;
	d->owner = &n_owner;
	free(d);
	return (d);
}
