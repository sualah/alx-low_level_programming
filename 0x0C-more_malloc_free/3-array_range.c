#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range -  a function that creates an array of integers.
 * @min: minimum number
 * @max: maximmum number
 *
 * Return: int array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}

