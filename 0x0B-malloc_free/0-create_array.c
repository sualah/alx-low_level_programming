#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that an array
 * @size: size of array
 * @c: character
 * Return: pointer to string
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(c));
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}

