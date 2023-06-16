#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: array
 * @size: size
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *str_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	str_ptr = (char *)ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		str_ptr[i] = 0;
	}
	return (ptr);
}

