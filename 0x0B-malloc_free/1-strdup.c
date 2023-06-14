#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string  given as a parameter.
 * @str: string pointer
 *
 * Return: string pointer
 */
char *_strdup(char *str)
{
	char *new_str;
	int len = strlen(str);

	if (str == NULL)
		return (NULL);
	new_str = (char*)malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, str);
	return (new_str);
}

