#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s:  a string pointer
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);
	return (1 + _strlen_recursion(s + 1));
}

