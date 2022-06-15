#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first argument
 * @s2: second argument
 *
 * Description: compare two strings
 * Return: 0 for same string, other for not same
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
