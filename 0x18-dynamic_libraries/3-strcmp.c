#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

