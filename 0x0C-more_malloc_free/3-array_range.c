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

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 2) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (; min <= max; min++)
	{
		ptr[i] = min;
		i++;
	}
	return (ptr);
}

