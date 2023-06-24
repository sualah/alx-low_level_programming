#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - perform action on an array
 * @array: array of numbers
 * @size: size of array
 * @action: action to perform on array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

