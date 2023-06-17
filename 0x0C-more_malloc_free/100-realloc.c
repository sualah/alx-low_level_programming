#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 * @ptr: void pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int size_cpy;
	void *new_ptr;
	unsigned int i;
	char *dest_ptr;
	const char *src_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	size_cpy = (old_size < new_size) ? old_size : new_size;
	dest_ptr = (char *)new_ptr;
	src_ptr = (const char *)ptr;
	for (i = 0; i < size_cpy; i++)
	{
		dest_ptr[i] = src_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}

