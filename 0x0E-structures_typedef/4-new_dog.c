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
	char *n_name = malloc(sizeof(name)), *n_owner = malloc(sizeof(owner));
	dog_t *d = malloc(sizeof(*d));
	int n1 = 0, n2 = 0;

	if (n_name == NULL)
	{
		free(n_name);
		free(n_owner);
		return (NULL);
	}
	while (*name)
	{
		n_name[n1] = *name;
		n1++;
		name++;
	}
	n_name[n1] = '\0';
	if (n_owner == NULL)
	{
		free(n_owner);
		free(n_name);
		return (NULL);
	}
	while (*owner)
	{
		n_owner[n2] = *owner;
		n2++;
		owner++;
	}
	n_owner[n2] = '\0';
	if (d == NULL)
	{
		free(n_owner);
		free(n_name);
		return (NULL);
	}
	d->name = n_name;
	d->age = age;
	d->owner = n_owner;
	return (d);
}
