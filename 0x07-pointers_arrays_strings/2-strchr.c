i#include "main.h"
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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	return (NULL);
}
