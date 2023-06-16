#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = (void *)malloc(b);

	if (ptr == NULL)
		exit(98);
	return (0);
}
