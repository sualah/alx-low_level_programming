#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string result
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int size = 0;
	int l1 = 0;
	int l2 = 0;

	if (s1 == NULL)
		size += 0;
	else
		size += sizeof(s1) - 1;

	if (s2 == NULL)
		size += 0;
	else
		size += sizeof(s2) - 1;

	str = malloc(size);

	if (str == NULL)
		return ("");

	while (s1 != NULL && *s1)
	{
		str[l1] = *s1;
		s1++;
		l1++;
	}

	while (s2 != NULL && *s2)
	{
		str[l1 + l2] = *s2;
		s2++;
		l1++;
	}
	str[l1 + l2] = '\0';
	return (str);
}

