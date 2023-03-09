#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: pointer to string
 * @c: character in s
 *
 * Return: pointer to c or null otherwise
 */
char *_strchr(char *s, char c)
{
	char *ptr = NULL;
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] == c)
		{
			ptr = &s[len];
			break;
		}
		len++;
	}
	return (ptr);
}
