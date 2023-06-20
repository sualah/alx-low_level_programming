#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print a new dog
 * @d: dog struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	d->age ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
	d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
