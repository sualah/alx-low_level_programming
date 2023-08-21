#include "main.h"

/**
 * _strlen - function that returns length of a string
 * @s: pointer to character string
 * Return: length of string as int
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length += 1;
	}
	return (length);
}

