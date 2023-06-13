#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int
 * @c: character
 *
 * Return: charater pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}


