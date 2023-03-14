#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 *
 * @str: a character pointer
 *
 * Return: a character pointer
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;

	s = malloc(size + 1);

	if (s == NULL)
		return (NULL);

	while (*str)
	{
		s[i] = *str++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
