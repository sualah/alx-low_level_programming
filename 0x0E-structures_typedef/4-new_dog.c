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
	dog_t d;
	dog_t *c = &d;

	d.name = name;
	d.age = age;
	d.owner = owner;
	return (c);
}
