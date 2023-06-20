#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n_name = malloc(sizeof(name));
	char *n_owner = malloc(sizeof(owner));
	dog_t *d = malloc(sizeof(*d));
	int n1 = 0, n2 = 0;

	if (d == NULL)
	{
		return (NULL);
	}
	if (n_name == NULL)
	{
		free(d);
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
	d->name = n_name;
	d->age = age;
	d->owner = n_owner;
	return (d);
}
